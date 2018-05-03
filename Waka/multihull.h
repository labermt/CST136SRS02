#pragma once
#include "hull.h"

class MultiHull final : public Hull
{
private:
	void setTurnRadius(Radius const radius) noexcept override;
	void setMaxWaveHeight(WaveHeight const height) noexcept override;

public:
	MultiHull() noexcept;
	~MultiHull() = default;
};

