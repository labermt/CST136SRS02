#pragma once
#include "hull.h"

class MultiHull : public Hull
{
private:
	TurnRadius minTurnRadius() noexcept override; 
	WaveHeight maxWaveHeight() noexcept override;
};

