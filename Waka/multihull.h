#pragma once
#include "hull.h"

class MultiHull final : public Hull
{
private:
	TurnRadius doGetMinTurnRadius() const noexcept override;
	WaveHeight doGetMaxWaveHeight() const noexcept override;

public:
	~MultiHull() = default;
};

