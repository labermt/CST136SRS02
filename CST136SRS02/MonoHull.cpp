#include "stdafx.h"
#include "MonoHull.h"


MonoHull::MonoHull()
{
}


/**
 * \brief 
 */
MonoHull::~MonoHull()
= default;

float MonoHull::minTurnRadius()
{
	return 30;
}

float MonoHull::maxWaveHeight()
{
	return 5;
}