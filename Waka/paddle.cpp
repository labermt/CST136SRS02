#include "stdafx.h"
#include "paddle.h"

Paddle::Paddle() noexcept :
Propulsion(0.0)
{
	
}

double Paddle::getKnots() const noexcept
{
	return 1.0;
}
