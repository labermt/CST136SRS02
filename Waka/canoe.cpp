#include "stdafx.h"
#include "canoe.h"
#include "water.h"

Canoe::Canoe(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) noexcept:
	Boat(hull, chart, propulsion)
{
}
std::string Canoe::doGetName() noexcept
{
	return "USS Euclid";
}

void Canoe::doVoyage()
{
	Water water;

	Direction const desiredDirection{ kNorth };

	auto hasSail{ false };
	for (auto& propulsionIterator : propulsion_)
	{
		if (propulsionIterator->getKnots() == 2)
		{
			hasSail = true;
		}
	}

	if (hasSail)
	{
		boatGood_ = false;
	}

	while (boatGood_ && chart_.getFeature(gps_) != Chart::Feature::kStop)
	{
		water.setCurrentHeading();
		water.setCurrentIntensity();

		if (desiredDirection == water.getCurrentHeading())
		{
			moveBoat(desiredDirection);
		}
		else if (maxSpeed_ > water.getCurrentIntensity())
		{
			moveBoat(desiredDirection);
		}
		else
		{
			moveBoat(water.getCurrentHeading());
		}

		// Check to make sure boat is still good
		if (chart_.getFeature(gps_) == Chart::Feature::kLand ||
			chart_.getFeature(gps_) == Chart::Feature::kUnkn)
		{
			boatGood_ = false;
		}
	}
}