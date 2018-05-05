#pragma once
#include "direction.h"

class Wind
{
private: 
	Direction wind_{ Direction::kNorth };
public:
	Direction getWindDirection() noexcept; 
}; 

