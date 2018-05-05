#include "stdafx.h"

#include "MonoHull.h"

Hull::TurnRadius MonoHull::minTurnRadius() noexcept
{
	return TurnRadius::kWide; //can turn +-180 degrees
}

Hull::WaveHeight MonoHull::maxWaveHeight() noexcept
{
	return WaveHeight::kLow; //2 foot waves
}