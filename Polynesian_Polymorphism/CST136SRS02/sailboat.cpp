#include "stdafx.h"
#include "sailboat.h"

std::string Sailboat::getName()
{
	return name_;
}

void Sailboat::nameBoat(std::string given)
{
	name_ = given;
}

void Sailboat::pushIn(const int longitude, const int latitude)
{
	chart.lat = latitude;
	chart.lon = longitude;
	chart.map[chart.lon][chart.lat] = marker_;
}