#pragma once
#include "chart.h"

class Water
{
	Chart::orientation dirrection_{ Chart::orientation::nw };
	int currentstrength_{ 1 };
	int waveheight_{ 1 };
};