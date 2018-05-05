#pragma once
#include "direction.h"

class Water
{
private:
	Direction currentHeading_{ kNorth };
	unsigned currentIntensity_{ 0 };

public:
	Direction getCurrentHeading() const noexcept;
	unsigned getCurrentIntensity() const noexcept;

	void setCurrentHeading();
	void setCurrentIntensity();
};

