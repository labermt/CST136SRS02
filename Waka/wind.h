#pragma once
#include "direction.h"

class Wind
{
	
	Direction wind_{Direction::north};

public:
	Direction get_wind_direction() const;
};
