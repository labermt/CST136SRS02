#include "stdafx.h"
#include "raft.h"
#include "current.h"

Raft::Raft(Cardinal directionOfCurrent, int speedOfCurrent) : direction(directionOfCurrent), speed(speedOfCurrent) {}

std::string Raft::getDirectionString() const noexcept
{
	//could have used Boost preprocessing stuff for enum conversion, but didn't understand how it worked, so implimented a switch for output
	switch (direction)
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

Cardinal Raft::getDirection() const noexcept
{
	return direction;
}


void Raft::setDirection(const Current& current)
{

	direction = current.getDirection();

}

void Raft::setSpeed(const int speedOfCurrent)
{
	speed = speedOfCurrent;
}


////overrides
std::string Raft::do_getName() const
{
	return Boat::do_getName();

}

void Raft::do_setName(std::string name) noexcept {

	Boat::do_setName(name);

}