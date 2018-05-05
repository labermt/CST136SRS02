#include "stdafx.h"
#include "sailboat.h"


std::string Sailboat::do_get_name()
{
	return name_;
}

Sailboat::Sailboat(std::string const name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart) :
	Boat(name, hull_type, prop, chart)
{
}
