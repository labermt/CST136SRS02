#include "stdafx.h"
#include "monohull.h"

void MonoHull::setTurnRadius(Radius const radius) noexcept
{
	Hull::setTurnRadius(radius);
}

void MonoHull::setMaxWaveHeight(WaveHeight const height) noexcept
{
	Hull::setMaxWaveHeight(height);
}

MonoHull::MonoHull() noexcept
{
	setTurnRadius(Radius::kShort);
	setMaxWaveHeight(WaveHeight::kSmall);
}
