#pragma once
#include "boat.h"

class Sailboat :
	public Boat
{
public:
	Sailboat(std::string name, Hull& hull_type, Chart& chart);
};

