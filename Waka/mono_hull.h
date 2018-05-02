#pragma once
#include "hull.h"
class Mono_hull :
	public Hull
{
	turn_radius min_turn_radius_{turn_radius::small};
	max_wave_height max_wave_height_{max_wave_height::small};

public:
	Mono_hull();
};

