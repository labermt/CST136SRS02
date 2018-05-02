#include "stdafx.h"
#include "boat.h"

//default constructor
Boat::Boat() : name("Odin") {}

Boat::Boat(std::string inputName) : name(inputName){}

std::string Boat::do_getName() const
{
	return name;
}

std::string Boat::getName() const
{
	std::string str = do_getName();
	return str;
}

void Boat::setName(std::string n) noexcept
{
	do_setName(n);
}

void Boat::do_setName(std::string n) noexcept
{
	name = n;
}
