#include "stdafx.h"
#include "propulsion.h"

Propulsion::Propulsion() : speed(0){}

int Propulsion::getSpeed() const
{
	const auto s = do_getSpeed();
	return s;
}

int Propulsion::do_getSpeed() const
{
	return speed;
}

void Propulsion::setSpeed(int n) noexcept
{
	do_setSpeed(n);
}

void Propulsion::do_setSpeed(int n) noexcept
{
	speed = n;
}




