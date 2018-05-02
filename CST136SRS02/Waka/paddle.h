#pragma once
#include "propulsion.h"


class Paddle final : public Propulsion
{
public:

	Paddle();

	//using Propulsion::getSpeed; <-- do I need this?

	void setSpeed(const int current); //overload from base class
	void setStrength(int n);

private:
	int do_getSpeed() const override;
	void do_setSpeed(int n) noexcept override;

	//paddle strength, speed multiplier
	int strength;


};

