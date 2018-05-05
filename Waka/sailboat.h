#pragma once
#include "boat.h"

class Sailboat :
	public Boat
{
protected:
	std::string do_get_name() override;

public:
	Sailboat(std::string name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart);
};

