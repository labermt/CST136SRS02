#include "stdafx.h"
#include "raft.h"
#include "wind.h"
#include "water.h"

Raft::Raft(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) noexcept :
Boat(hull, chart, propulsion)
{
}

std::string Raft::doGetName() noexcept
{
	return "USS Pythagoras";
}

void Raft::doVoyage()
{
	Water water;

	Direction const desiredDirection{ kNorth };

	if (propulsion_.size())
	{
		boatGood_ = false;
	}

	while (boatGood_ && chart_.getFeature(gps_) != Chart::Feature::kStop)
	{
		water.setCurrentHeading();
		water.setCurrentIntensity();

		// Move one square, depending on conditions from wind and water
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
			chart_.getFeature(gps_) == Chart::Feature::kDeep ||
			chart_.getFeature(gps_) == Chart::Feature::kUnkn)
		{
			boatGood_ = false;
		}
	}
}