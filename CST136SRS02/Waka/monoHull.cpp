#include "stdafx.h"
#include "monoHull.h"

Hull::TurnRadius MonoHull::minTurnRadius() noexcept
{
	 return TurnRadius::kShort; 
}

Hull::WaveHeight MonoHull::maxWaveHeight() noexcept
{
	return WaveHeight::kSmall;
}
