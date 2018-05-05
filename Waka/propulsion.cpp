#include "stdafx.h"
#include "propulsion.h"
#include <limits>
#include <exception>

Propulsion::Propulsion(const double minWindAngle) noexcept:
minWindAngle_{ minWindAngle }
{
	
}

double Propulsion::doGetKnots() const
{
	return getKnots();
}


double Propulsion::getKnots() const
{
	throw std::exception("FATAL: Propulsion::getKnots() was not overridden! One of the propulsion systems forgot the override!");
}

double Propulsion::getMinWindAngle() const noexcept
{
	return minWindAngle_;
}

