#include "stdafx.h"
#include "Boat.h"


Boat::Boat(const std::string boatName, Propulsion* propType)
	:myProp(propType), name(boatName)
{
	myHull = nullptr;
	maxBoatSpeed = myProp->knots;
}

std::string Boat::getName()
{
	return this->name;
}

void Boat::setHull(Hull* hullType)
{
	myHull = hullType;
}
