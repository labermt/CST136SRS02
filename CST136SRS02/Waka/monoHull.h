#pragma once
#include "hull.h"

class MonoHull : public Hull
{
private:
	TurnRadius minTurnRadius() noexcept override; 
	WaveHeight maxWaveHeight() noexcept override;
};

