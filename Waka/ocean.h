#pragma once
#include "boat.h"

class wind
{

};

class water
{

};

class chart
{

};

class ocean
{
	wind* wind_{ nullptr };
	water* water_{ nullptr };
	chart* chart_{ nullptr };
	boat* boat_{ nullptr };

};