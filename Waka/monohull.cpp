#include "stdafx.h"
#include "monohull.h"

Hull::TurnRadius MonoHull::doGetMinTurnRadius() const noexcept
{
	return TurnRadius::kShort;
}

Hull::WaveHeight MonoHull::doGetMaxWaveHeight() const noexcept
{
	return WaveHeight::kSmall;
}
