#pragma once
#include "Boat.h"


class Sailboat :
	public Boat

{

public:
	Sailboat();
	Sailboat(Hull *h);
	virtual ~Sailboat();

	void updateBoat(Water wa, Wind wi);

private:
	 


};

