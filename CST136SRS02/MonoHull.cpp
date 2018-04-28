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

float MonoHull::min_turn_radius()
{
	return 30;
}

float MonoHull::max_wave_height()
{
	return 5;
}