#include "stdafx.h"
#include "Wind.h"
#include <cstdlib>

Wind::Wind()
{
}


Wind::~Wind()
{
}

float Wind::get_speed()
{
	return speed_;
}


float Wind::get_direction()
{
	return direction_;
}


void Wind::update_wind()
{
	speed_ = float(rand() % 15);
	direction_ = float(rand() % 360);
}