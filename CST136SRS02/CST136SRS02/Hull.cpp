#include "stdafx.h"
#include "Hull.h"

int Hull::do_get_min_turn_radius() const
{
	return minTurnRadius;
}

int Hull::getMinTurnRadius() const
{
	return do_get_min_turn_radius();
}

int Hull::do_get_max_wave_height() const
{
	return maxWaveHeight;
}

int Hull::getMaxWaveHeight() const
{
	return do_get_max_wave_height();
}

Hull::Hull(int minTurn, int maxWave)
	:minTurnRadius { minTurn }, maxWaveHeight { maxWave }
{
}

