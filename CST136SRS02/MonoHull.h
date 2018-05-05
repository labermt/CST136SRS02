#pragma once
#include "Hull.h"
class MonoHull :
	public Hull
{
public:
	MonoHull();

	virtual ~MonoHull();


	float min_turn_radius();
	float max_wave_height();

};

