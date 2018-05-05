#include "stdafx.h"
#include "sail.h"

Sail::Sail() noexcept :
Propulsion(45.0)
{
	
}

double Sail::getKnots() const noexcept
{
	return 5.0;
}
