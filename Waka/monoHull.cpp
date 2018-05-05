#include "stdafx.h"
#include "monoHull.h"

double MonoHull::maxWaveHeight() const noexcept
{
	return 3.0;
}

double MonoHull::minTurnRadius() const noexcept
{
	return 2.0;
}

double MonoHull::addedStability() const noexcept
{
	return 1.0;
}
