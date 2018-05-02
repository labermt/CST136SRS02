#pragma once
#include <string>
#include "Propulsion.h"
#include "Hull.h"
#include "Chart.h"
#include "Water.h"
#include "Wind.h"
#include <iostream>

using namespace std; 

class Boat
{

public:
	
	Boat() { prop_ = nullptr, hull_ = nullptr; }

	Boat(Propulsion *prop, Hull *hull) { prop_ = prop, hull_ = hull; }
	
	virtual ~Boat() { ; }

	float getSpeed();// { return speed; }

	string getName() { return name_; }
	void setName(string n) { name_ = n; }

	virtual void updateBoat(Water wa, Wind wi) = 0;

	int is_finished();

protected:
	Propulsion *prop_; 
	Hull *hull_; 
	Chart chart_; 

	string name_; 
};

