#pragma once
#include "Boat.h"
class Hull : public Boat
{
public:
	Hull();
	~Hull();

	virtual void minTurnRadius() = 0;
	virtual void maxWaveHeight() = 0;
};

