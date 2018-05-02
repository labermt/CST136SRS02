#pragma once
#include "hull.h"

class Multi_hull : 
	public Hull
{
	turn_radius min_turn_radius_{turn_radius::large};
	max_wave_height max_wave_height_{max_wave_height::large};
	
public:
	Multi_hull();
	~Multi_hull();
};

