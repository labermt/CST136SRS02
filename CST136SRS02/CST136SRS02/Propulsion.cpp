#include "stdafx.h"
#include "Propulsion.h"

int Propulsion::do_get_knots() const
{
	return knots;
}

Propulsion::Propulsion()
	:knots {0}
{
}

int Propulsion::getKnots() const
{
	return do_get_knots();
}

void Propulsion::setKnots(int knots_)
{
	knots = knots_;
}
