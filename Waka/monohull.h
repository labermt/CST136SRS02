#pragma once
#include "hull.h"

class MonoHull final : public Hull
{
private:
	void setTurnRadius(Radius const radius) noexcept override;
	void setMaxWaveHeight(WaveHeight const height) noexcept override;

public:
	MonoHull() noexcept;
	~MonoHull() = default;
};

