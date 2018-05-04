#pragma once
#include "hull.h"
class Mono_hull :
	public Hull
{
	turn_radius min_turn_radius_{turn_radius::small};
	max_wave_height max_wave_height_{max_wave_height::small};
	turn_radius do_get_turn_rad() override;
	max_wave_height do_get_max_wave_height() override;
};

