#include "stdafx.h"
#include "wind.h"
#include "randomgen.h"
#include <cassert>

Direction Wind::getWindHeading() const noexcept
{
	return windHeading_;
}

unsigned Wind::getWindIntensity() const noexcept
{
	return windIntensity_;
}

void Wind::setWindHeading()
{
	unsigned const direction{ randomGen(4) };

	switch (direction)
	{
	case 0:
		windHeading_ = kNorth;
		break;
	case 1:
		windHeading_ = kEast;
		break;
	case 2:
		windHeading_ = kSouth;
		break;
	case 3:
		windHeading_ = kWest;
		break;
	default:
		assert(false);
	}
}

void Wind::setWindIntensity()
{
	windIntensity_ = randomGen(4);
}