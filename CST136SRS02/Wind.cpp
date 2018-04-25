#include "stdafx.h"
#include "Wind.h"
#include <cstdlib>

Wind::Wind()
{
}


Wind::~Wind()
{
}

float Wind::getSpeed()
{
	return speed;
}


float Wind::getDirection()
{
	return direction;
}


void Wind::updateWind()
{
	speed = rand() % 15;
	direction = rand() % 360;
}