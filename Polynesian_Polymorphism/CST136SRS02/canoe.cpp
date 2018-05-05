#include "stdafx.h"
#include "canoe.h"

std::string Canoe::getName()
{
	return name_;
}

void Canoe::nameBoat(std::string given)
{
	name_ = given;
}

void Canoe::pushIn(const int longitude, const int latitude)
{
	chart.lat = latitude;
	chart.lon = longitude;
	chart.map[chart.lon][chart.lat] = marker_;
}