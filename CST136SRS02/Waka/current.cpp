#include "stdafx.h"
#include "current.h"


Current::Current() : directionOfCurrent(Cardinal::SW){}

Cardinal Current::getDirection() const noexcept
{
	return directionOfCurrent;
}

std::string Current::getDirectionString() const noexcept
{
	switch (directionOfCurrent)
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



