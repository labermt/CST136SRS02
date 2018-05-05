#include "stdafx.h"

#include "Hull.h"

Hull::TurnRadius Hull::getTurnRadius()
{
	return minTurnRadius();
}

Hull::WaveHeight Hull::getWaveHeight()
{
	return maxWaveHeight();
}