#include "stdafx.h"
#include "hull.h"

Hull::Hull()
{
	;
}

Hull::Radius Hull::getTurnRadius() const noexcept
{
	return turnRadius_;
}

Hull::WaveHeight Hull::getMaxWaveHeight() const noexcept
{
	return maxWaveHeight_;
}

void Hull::setTurnRadius(Radius const radius) noexcept
{
	turnRadius_ = radius;
}

void Hull::setMaxWaveHeight(WaveHeight const height) noexcept
{
	maxWaveHeight_ = height;
}
