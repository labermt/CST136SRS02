#pragma once
#include "boat.h"

class Hull
	
{

	friend class Boat;

protected:

	enum class turn_radius { small, large };
	enum class max_wave_height { small, large };

	virtual turn_radius do_get_turn_rad()=0;
	virtual max_wave_height do_get_max_wave_height()=0;

public:

	turn_radius get_turn_radius() const;
	max_wave_height get_max_wave_height() const;
};
