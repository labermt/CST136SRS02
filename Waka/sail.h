#pragma once
#include "Propulsion.h"

class Sail :
	public Propulsion
{
protected:
	propulsion_type do_get_knots() override;
};
