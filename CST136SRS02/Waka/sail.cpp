#include "stdafx.h"
#include "sail.h"


Sail::Sail() : sailDirection(Cardinal::ANCHORED) {}


void Sail::setDirection(Cardinal direction) noexcept
{
	sailDirection = direction;
}

Cardinal Sail::getDirection() const {

	return sailDirection;
}

std::string Sail::getDirectionString() const
{
	//could have used Boost preprocessing stuff for enum conversion, but didn't understand how it worked, so implimented a switch for output
	switch (sailDirection)
	{
		case Cardinal::N: 
			return "North";
		case Cardinal::S:
			return "South";
		case Cardinal::E:
			return "East";
		case Cardinal::W:
			return "West";
		case Cardinal::NE:
			return "Northeast";
		case Cardinal::SE:
			return "Southeast";
		case Cardinal::NW:
			return "Northwest";
		case Cardinal::SW:
			return "Southwest";
		default:	return "No direction set";
	}
}

void Sail::do_setSpeed(int n) noexcept {

	Propulsion::do_setSpeed(n);
}

void Sail::setSpeed(const int current, const Cardinal windDirection) noexcept
{
	//figure out how to calculate speed based on wind direction, sail direction and current speed
	//needs to be set right after instance created in boat



}

int Sail::do_getSpeed() const
{
	return Propulsion::do_getSpeed();
}
