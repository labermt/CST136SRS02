#pragma once
#include "Boat.h"
class Propulsion : public Boat
{
public:
	Propulsion();
	~Propulsion();

	virtual void getKnots() = 0;
};

