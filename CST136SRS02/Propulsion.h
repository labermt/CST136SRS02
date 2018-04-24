#pragma once
#include "Boat.h"
class Propulsion :
	public Boat
{
public:
	Propulsion();
	virtual ~Propulsion();

	void minTurnRadius();
	void maxWaveHeight();

};

