#include "stdafx.h"
#include "water.h"

const compass::orientation Water::getDirrection()
{
	return direction_;
}

const int Water::getCurrentStrenght()
{
	return currentstrength_;
}

const int Water::getWaveHeight()
{
	return waveheight_;
}