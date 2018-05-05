#include "stdafx.h"
#include "sailboat.h"


Sailboat::Sailboat(std::string const name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart) :
	Boat(name, hull_type, prop, chart)
{
}
