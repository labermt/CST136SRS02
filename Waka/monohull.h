#pragma once
#include "hull.h"

class MonoHull : public Hull
{
private:
	Hull hull_{};
	int turnRadius_{ 90 };
	int waveHeight_{ 3 };

public:
	int minTurnRadius() override;
	int maxWaveHeight() override;
};
