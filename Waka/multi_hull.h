#pragma once
#include "hull.h"

class Multi_hull : 
	public Hull
{
	turn_radius min_turn_radius_{turn_radius::large};
	max_wave_height max_wave_height_{max_wave_height::large};

	turn_radius do_get_turn_rad() const override;
	max_wave_height do_get_max_wave_height() const override;

};

