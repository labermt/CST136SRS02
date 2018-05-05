#pragma once
#include "direction.h"

class Wind
{
private:
	Direction windHeading_{ kNorth };
	unsigned windIntensity_{ 0 };

public:
	Direction getWindHeading() const noexcept;
	unsigned getWindIntensity() const noexcept;

	void setWindHeading();
	void setWindIntensity();
};

