#pragma once
#include "hull.h"
class multihull :
	public hull
{
private:
	int wave_{ 6 };
	int turnRadiusdegrees_{ 45 };
public:
	int minimumTurnRadius();
	int waveHeight();
};

