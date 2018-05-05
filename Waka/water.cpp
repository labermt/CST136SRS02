#include "stdafx.h"
#include "water.h"
#include "randomgen.h"
#include <cassert>

Direction Water::getCurrentHeading() const noexcept
{
	return currentHeading_;
}

unsigned Water::getCurrentIntensity() const noexcept
{
	return currentIntensity_;
}

void Water::setCurrentHeading()
{
	unsigned const direction{ randomGen(4) };

	switch (direction)
	{
	case 0:
		currentHeading_ = kNorth;
		break;
	case 1:
		currentHeading_ = kEast;
		break;
	case 2:
		currentHeading_ = kSouth;
		break;
	case 3:
		currentHeading_ = kWest;
		break;
	default:
		assert(false);
	}
}

void Water::setCurrentIntensity()
{
	currentIntensity_ = randomGen(4);
}
