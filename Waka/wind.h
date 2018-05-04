#pragma once
#include "compass.h"

class Wind
{
private:
	compass::orientation direction_{ compass::orientation::ne };
	int strength_{ 3 };
public:
	const compass::orientation getDirection();
	const int getStrength();
};