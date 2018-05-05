#include "stdafx.h"
#include "Propulsion.h"

int Propulsion::do_get_knots() const noexcept
{
	return knots;
}

Propulsion::Propulsion() noexcept
	:knots {0}
{
}

int Propulsion::getKnots() const noexcept
{
	return do_get_knots();
}

void Propulsion::setKnots(int knots_) noexcept
{
	knots = knots_;
}
