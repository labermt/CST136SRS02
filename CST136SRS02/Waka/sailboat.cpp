#include "stdafx.h"
#include "sailboat.h"





int Sailboat::getSpeed() const noexcept
{
	return this->sail.getSpeed();
}

std::string Sailboat::do_getName() const
{
	return Boat::getName();
}

void Sailboat::do_setName(std::string name) noexcept
{

	Boat::do_setName(name);

}


