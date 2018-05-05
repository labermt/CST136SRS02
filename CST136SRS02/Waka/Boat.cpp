#include "stdafx.h"
#include "Boat.h"


Boat::Boat(const std::string boatName, Propulsion* propType)
	:name(boatName), myProp(propType)
{
}

std::string Boat::getName()
{
	return name;
}

void Boat::setHull(Hull* hullType)
{
	myHull = hullType;
}

void Boat::setWindSpeed(int const windSpeed)
{
	windConditions.setWindSpeed(windSpeed);
}

void Boat::setWaterCurrentSpeed(int const waterSpeed)
{
	waterConditions.setWaterSpeed(waterSpeed);
}
