#pragma once
#include "Propulsion.h"

class Sail :
	public Propulsion
{
	movement speed_{ movement::fast };

	int do_get_knots() override;
};
