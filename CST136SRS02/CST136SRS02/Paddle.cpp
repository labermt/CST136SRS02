#include "stdafx.h"
#include "Paddle.h"


int Paddle::do_get_knots() const
{
	return Propulsion::do_get_knots();
}

Paddle::Paddle()
{
	setKnots(50);
}
