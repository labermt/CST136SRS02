#include "stdafx.h"
#include "boat.h"

std::string Boat::getName()
{
	return name_;
}

void Boat::nameBoat(const std::string given)
{
	name_ = given;
}

void Boat::pushIn(const int longitude, const int latitude)
{
	chart.lat = latitude;
	chart.lon = longitude;
}

void Boat::move(const int current_direction)
{
	chart.map[chart.lon][chart.lat] = marker_;
	if (current_direction == 0)
	{
		chart.lon -= 1;
	}
	else if (current_direction == 1)
	{
		chart.lat += 1;
	}
	else if (current_direction == 2)
	{
		chart.lon += 1;
	}
	else if (current_direction == 3)
	{
		chart.lat -= 1;
	}
}