#include "stdafx.h"
#include "chart.h"
#include "environment.h"
#include "boat.h"

void Boat::moveBoat(Direction direction)
{
	position_.move(direction, 1);
}

void Boat::setSail()
{
	while (floating_ && chart_->getFeature(position_) != Chart::Feature::kFinish)
	{
		moveBoat(kNorth);
	}
}

Boat::Boat() : chart_{ new Chart }
{
}

Boat::~Boat()
{
	delete chart_;
}