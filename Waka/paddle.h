#pragma once
#include "Propulsion.h"

class Paddle :
	public Propulsion
{
protected:
	propulsion_type do_get_knots() override;
};
