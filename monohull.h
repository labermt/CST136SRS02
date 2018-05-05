#pragma once
#include "hull.h"

class monohull :
	public hull
{
private:
	hull hull_{};
	int turnRadiusDegree_{ 75 };
	int wave_{ 6 };

public:
	int minimumTurnRadius() override;
	int waveHeight() override;
};

