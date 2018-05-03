#include "stdafx.h"
#include "multihull.h"

void MultiHull::setTurnRadius(Radius const radius) noexcept
{
	Hull::setTurnRadius(radius);
}

void MultiHull::setMaxWaveHeight(WaveHeight const height) noexcept
{
	Hull::setMaxWaveHeight(height);
}

MultiHull::MultiHull() noexcept
{
	setTurnRadius(Radius::kLong);
	setMaxWaveHeight(WaveHeight::kLarge);
}
