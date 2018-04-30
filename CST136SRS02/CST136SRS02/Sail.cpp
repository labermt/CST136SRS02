#include "stdafx.h"
#include "Sail.h"

int Sail::do_get_knots() const
{
	return Propulsion::do_get_knots();
}

Sail::Sail()
{
	setKnots(50);
}
