#include "stdafx.h"
#include "boat.h"

std::string Boat::getName() noexcept
{
	return doGetName();
}

void Boat::moveBoat(Direction direction)
{
	gps_.move(direction, 1);
}

void Boat::setSail()
{
}

Boat::Boat(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) :
	hull_{ hull },
	chart_{ chart },
	propulsion_{propulsion}
{
	getName();

	auto speedTally = 0;

	for (auto& propulsionIterator: propulsion)
	{
		speedTally += (*propulsionIterator).getKnots();
	}

	maxSpeed_ = speedTally;
}
