#include "stdafx.h"
#include "boat.h"

std::string Boat::getName()
{
	return name_;
}

void Boat::nameBoat(std::string given)
{
	name_ = given;
}

void Boat::pushIn(const int latitude, const int longitude)
{
	chart.lat = latitude;
	chart.lon = longitude;
}