#pragma once
#include <string>
#include "Propulsion.h"
#include "Hull.h"
#include "Chart.h"
#include "Water.h"
#include "Wind.h"

using namespace std; 

class Boat
{

public:
	Boat() { p = NULL, h = nullptr ; }
	Boat(Propulsion *prop, Hull *hull) { p = prop, h = hull; }
	virtual ~Boat();

	void getSpeed();

	string getName();
	void setName(string n);

	virtual void updateBoat(Water wa, Wind wi) {}

	int isFinished();

protected:
	Propulsion *p; 
	Hull *h; 
	Chart c; 

	string name; 
};

