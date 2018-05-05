#include "stdafx.h"
#include "Sail.h"

int Sail::do_get_knots() const noexcept
{
	return Propulsion::do_get_knots();
}

Sail::Sail() noexcept
{
	setKnots(50);
}
