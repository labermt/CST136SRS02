#include "stdafx.h"
#include "Hull.h"

int Hull::do_get_min_turn_radius() const noexcept
{
	return minTurnRadius;
}

int Hull::getMinTurnRadius() const noexcept
{
	return do_get_min_turn_radius();
}

int Hull::do_get_max_wave_height() const noexcept
{
	return maxWaveHeight;
}

int Hull::getMaxWaveHeight() const noexcept
{
	return do_get_max_wave_height();
}

Hull::Hull(int minTurn, int maxWave) noexcept
	:minTurnRadius { minTurn }, maxWaveHeight { maxWave }
{
}

