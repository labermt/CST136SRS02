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
float Water::get_speed()
{
	return speed_;
}


float Water::get_direction()
{
	return direction_;
}

void Water::update_current()
{
	speed_ = float(rand() % 15); 
	direction_ = float(rand() % 360); 
}