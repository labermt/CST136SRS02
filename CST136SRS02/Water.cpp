#include "stdafx.h"
#include "Water.h"
#include <cstdlib>
#include <time.h>

Water::Water()
{
	srand(time(NULL));
}


Water::~Water()
{
}
float Water::getSpeed()
{
	return speed;
}


float Water::getDirection()
{
	return direction;
}

void Water::updateCurrent()
{
	speed = rand() % 15; 
	direction = rand() % 360; 
}