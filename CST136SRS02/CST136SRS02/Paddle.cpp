#include "stdafx.h"
#include "Paddle.h"


int Paddle::do_get_knots() const noexcept
{
	return Propulsion::do_get_knots();
}

Paddle::Paddle() noexcept
{
	setKnots(50);
}
