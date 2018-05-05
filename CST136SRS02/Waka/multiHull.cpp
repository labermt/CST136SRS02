#include "stdafx.h"
#include "multiHull.h"

Hull::TurnRadius MultiHull::minTurnRadius() noexcept
{
	return TurnRadius::kShort;
}

Hull::WaveHeight MultiHull::maxWaveHeight() noexcept
{
	return WaveHeight::kSmall;
}