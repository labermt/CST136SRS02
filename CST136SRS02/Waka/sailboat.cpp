#include "stdafx.h"
#include "sailboat.h"


Sailboat::Sailboat() : direction(Cardinal::S) {}

int Sailboat::getSpeed() const noexcept
{
	return this->sail.getSpeed();
}

Cardinal Sailboat::getDirection() const noexcept
{
	return this->sail.getDirection();
}

std::string Sailboat::getDirectionString() const noexcept
{
	return this->sail.getDirectionString();
}

int Sailboat::getMaxHeight() const noexcept
{
	return this->hull.getMaxWaveHeight();
}

void Sailboat::setDirection( Wind & wind) noexcept
{
	this->sail.setDirection(wind.getDirection());
	direction = sail.getDirection();
}

void Sailboat::setSpeed(Current current, Wind windDirection) noexcept
{
	//passed in copies, wouldn't do with larger programs/classes
	this->sail.setSpeed(current.getspeed(), windDirection.getDirection(), windDirection.getSpeed());
}

std::string Sailboat::do_getName() const
{
	return Boat::do_getName();
}

void Sailboat::do_setName(std::string name) noexcept
{
	Boat::do_setName(name);
}


