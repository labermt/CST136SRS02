#include "stdafx.h"
#include "hull.h"

double Hull::getMinTurnRadius() const noexcept
{
	return minTurnRadius();
}

double Hull::getMaxWaveHeight() const noexcept
{
	return maxWaveHeight();
}

double Hull::getAddedStability() const noexcept
{
	return addedStability();
}

