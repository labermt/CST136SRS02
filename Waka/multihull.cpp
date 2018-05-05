#include "stdafx.h"
#include "multihull.h"

Hull::TurnRadius MultiHull::doGetMinTurnRadius() const noexcept
{
	return TurnRadius::kLong;
}

Hull::WaveHeight MultiHull::doGetMaxWaveHeight() const noexcept
{
	return WaveHeight::kLarge;
}
