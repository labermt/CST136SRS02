#include "stdafx.h"
#include "monoHull.h"


MonoHull::MonoHull()
{
	maxWaveHeight = 5;
	minTurnRadius = 90;
}

int MonoHull::do_getMaxWaveHeight() const
{
	return Hull::do_getMaxWaveHeight();
}

int MonoHull::do_getMinTurnRadius() const
{
	return Hull::do_getMinTurnRadius();
}


