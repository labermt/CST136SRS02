#pragma once
#include "Boat.h"
class Propulsion
{
public:
	Propulsion();
	~Propulsion();

	virtual void getKnots() = 0;
};

