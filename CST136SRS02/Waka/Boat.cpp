#include "stdafx.h"
#include "Boat.h"


Boat::Boat(const std::string boatName, Propulsion* propType)
	:name(boatName), myProp(propType)
{
}

std::string Boat::getName()
{
	return this->name;
}
