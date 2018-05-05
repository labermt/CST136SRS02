#pragma once
#include "hull.h"

class MonoHull : public Hull
{
private:
	const int turnRadius_{ 1 };
	const int waveHeight_{ 3 };

public:
	const int do_minTurnRadius() override;
	const int do_maxWaveHeight() override;
};
