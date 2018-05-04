#pragma once
#include "hull.h"

class MonoHull : public Hull
{
private:
	int turnRadius_{ 2 };
	int waveHeight_{ 3 };

public:
	int do_minTurnRadius() override;
	int do_maxWaveHeight() override;
};
