#pragma once
#include "direction.h"

class Water
{
private:
	Direction currentDirection_{kNorth}; 

public:
	Direction getCurrentDirection() const noexcept;

private:
	void setCurrentDirection() noexcept;
};

