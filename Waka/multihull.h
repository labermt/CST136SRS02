#pragma once
#include "hull.h"

class MultiHull : public Hull
{
private:
	const int turnRadius_{ 2 };
	const int waveHeight_{ 7 };

public:
	const int do_minTurnRadius() override;
	const int do_maxWaveHeight() override;
};
