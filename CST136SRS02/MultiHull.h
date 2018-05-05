#pragma once
#include "Hull.h"
class MultiHull :
	public Hull

{
public:
	MultiHull();
	virtual ~MultiHull();

	float min_turn_radius();
	float max_wave_height();

};

