#pragma once
#include "Water.h"
#include "Wind.h"
#include "Boat.h"

class Simulation
{
public:
	Simulation();
	virtual ~Simulation();

	void simulate();

private:
	Water wa_;
	Wind wi_;
	vector<Boat> fleet_; 
};

