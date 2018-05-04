#pragma once
#include "hull.h"

class MultiHull : public Hull
{
private:
	int turnRadius_{ 45 };
	int waveHeight_{ 7 };

public:
	int minTurnRadius() override;
	int maxWaveHeight() override;
};
