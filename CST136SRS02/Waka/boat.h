#pragma once
//#include <string.h>
#include <string>
#include "propulsion.h"
#include "hull.h"
#include "wind.h"
#include "water.h"
#include "chart.h"
#include <vector>
//I am in charge of the chart, propulsion and hull may need to be cleaned up later
class Boat
{
public:
	virtual std::string doGetName() = 0; //= 0 means you cannot create a boat anymore 
	Boat(const Hull& hull, const std::vector<Propulsion*>& propulsion); //a reference to a vector of pointers 
private:
	virtual std::string getName()
	{
		doGetName();
	}
	const Hull & hull_; 
	Chart * const chart_; 
	const std::vector<Propulsion*>& propulsion_; //TODO can this be a reference?
	virtual ~Boat();
};

