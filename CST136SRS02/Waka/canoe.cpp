#include "stdafx.h"
#include "canoe.h"

int Canoe::getSpeed() const
{
	return this->paddle.getSpeed();
}

Cardinal Canoe::getDirection(const Current& current) 
{
	return current.getDirection();
}

std::string Canoe::getDirectionString(const Current & current)
{
	switch (current.getDirection())
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

int Canoe::getMaxHeight() const noexcept
{
	return this->hull.getMaxWaveHeight();
}

void Canoe::setSpeed(int speedOfCurrent) noexcept
{
	this->paddle.setSpeed(speedOfCurrent);
}

void Canoe::setPaddleStrength(int strength) noexcept
{
	this->paddle.setStrength(strength);
}

std::string Canoe::do_getName() const
{
	return Boat::getName();
}

void Canoe::do_setName(std::string name) noexcept
{
	Boat::do_setName(name);
}
