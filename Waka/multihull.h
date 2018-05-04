#pragma once
#include "hull.h"

class MultiHull : public Hull
{
private:
	int turnRadius_{ 1 };
	int waveHeight_{ 7 };

public:
	int do_minTurnRadius() override;
	int do_maxWaveHeight() override;
};
