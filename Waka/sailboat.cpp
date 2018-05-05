#include "stdafx.h"
#include "sailboat.h"
#include "wind.h"

Sailboat::Sailboat(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) noexcept:
	Boat(hull, chart, propulsion)
{
}

std::string Sailboat::doGetName() noexcept
{
	return "USS Archimedes";
}

void Sailboat::doVoyage()
{
	Wind wind;

	Direction const desiredDirection{ kNorth };

	auto hasSail{ false };
	for (auto& propulsionIterator : propulsion_)
	{
		if (propulsionIterator->getKnots() == 2)
		{
			hasSail = true;
		}
	}

	if (!hasSail)
	{
		boatGood_ = false;
	}

	while (boatGood_ && chart_.getFeature(gps_) != Chart::Feature::kStop)
	{
		wind.setWindHeading();
		wind.setWindIntensity();


		// Move one square, depending on conditions from wind and water
		if (desiredDirection == wind.getWindHeading())
		{
			moveBoat(desiredDirection);
		}
		else if (maxSpeed_ > wind.getWindIntensity())
		{
			moveBoat(desiredDirection);
		}
		else if (maxSpeed_ < wind.getWindIntensity())
		{
			moveBoat(wind.getWindHeading());
		}


		// Check to make sure boat is still good
		if (chart_.getFeature(gps_) == Chart::Feature::kLand ||
			chart_.getFeature(gps_) == Chart::Feature::kUnkn)
		{
			boatGood_ = false;
		}
	}
}