#include "stdafx.h"
#include "hull.h"

Hull::Hull() : minTurnRadius(0), maxWaveHeight(0){}

int Hull::getMaxWaveHeight() const 
{
	return do_getMaxWaveHeight();
}

int Hull::getMinTurnRadius() const
{
	return do_getMinTurnRadius();
}

int Hull::do_getMaxWaveHeight() const 
{
	return maxWaveHeight;
}

int Hull::do_getMinTurnRadius() const
{
	return minTurnRadius;
}

