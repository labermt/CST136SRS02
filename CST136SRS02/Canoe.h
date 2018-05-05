#pragma once
#include "Boat.h"
class Canoe :
	public Boat
{
public:
	Canoe();
	virtual ~Canoe();

	void updateBoat(Water wa, Wind wi);
};

