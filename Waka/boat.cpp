#include "stdafx.h"
#include "boat.h"
#include "monohull.h"
#include "raft.h"
#include "water.h"
#include "wind.h"

std::string Boat::getName() noexcept
{
	return doGetName();
}

void Boat::moveBoat(Direction direction)
{
	gps_.move(direction, 1);
}

Boat::Boat(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) noexcept:
	hull_{ hull },
	chart_{ chart },
	propulsion_{ propulsion }
{
	auto speedTally = 0;
	for (auto& propulsionIterator : propulsion)
	{
		speedTally += (*propulsionIterator).getKnots();
	}

	maxSpeed_ = speedTally;
}
