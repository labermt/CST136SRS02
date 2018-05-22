#include "stdafx.h"
#include "paddle.h"

Paddle::Paddle() : strength(1){}

int Paddle::do_getSpeed() const
{
	return Propulsion::do_getSpeed();
}

void Paddle::do_setSpeed(int n) noexcept
{
	Propulsion::do_setSpeed(n);
}

void Paddle::setSpeed(const int current)
{
	const auto s = (strength * current) / 10;
	do_setSpeed(s);
}

void Paddle::setStrength(int n)
{
	strength = n;
}


