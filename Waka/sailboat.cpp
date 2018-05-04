#include "stdafx.h"
#include "sailboat.h"


Sailboat::Sailboat(std::string const name, Hull& hull_type, Chart& chart) :
	Boat(name, hull_type, chart)
{
}
