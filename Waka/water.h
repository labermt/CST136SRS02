#pragma once
#include "compass.h"

class Water
{
private:
	compass::orientation direction_{ compass::orientation::nw };
	int currentstrength_{ 1 };
	int waveheight_{ 1 };
public:
	const compass::orientation getDirrection();
	const int getCurrentStrenght();
	const int getWaveHeight();
};