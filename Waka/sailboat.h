#pragma once
#include "boat.h"

class Sailboat :
	public Boat
{
public:
	Sailboat(std::string const name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart);
};

