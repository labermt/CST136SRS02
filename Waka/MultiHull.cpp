#include "stdafx.h"

#include "MultiHull.h"

Hull::TurnRadius MultiHull::minTurnRadius() noexcept
{
	return TurnRadius::kNarrow; //can turn +-90 degrees
}

Hull::WaveHeight MultiHull::maxWaveHeight() noexcept
{
	return WaveHeight::kHigh; //5 foot waves
}