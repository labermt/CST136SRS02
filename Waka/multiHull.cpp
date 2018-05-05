#include "stdafx.h"
#include "multiHull.h"

double MultiHull::maxWaveHeight() const noexcept
{
	return 5.0;
}

double MultiHull::minTurnRadius() const noexcept
{
	return 9.0;
}

double MultiHull::addedStability() const noexcept
{
	return 1.5;
}
