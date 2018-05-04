#pragma once
#include "hull.h"

class MonoHull final : public Hull
{
private:
	TurnRadius doGetMinTurnRadius() const noexcept override;
	WaveHeight doGetMaxWaveHeight() const noexcept override;
};

