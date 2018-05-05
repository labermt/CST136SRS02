#include "stdafx.h"
#include "multiHull.h"


MultiHull::MultiHull()
{
	maxWaveHeight = 10;
	minTurnRadius = 45;
}

int MultiHull::do_getMaxWaveHeight() const
{
	return Hull::do_getMaxWaveHeight();
}

int MultiHull::do_getMinTurnRadius() const
{
	return Hull::do_getMinTurnRadius();
}
