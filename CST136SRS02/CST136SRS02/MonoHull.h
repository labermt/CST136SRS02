#pragma once
#include "Hull.h"
class MonoHull : public Hull
{
protected:
	int do_get_min_turn_radius() const override; 
	int do_get_max_wave_height() const override; 
public:
	MonoHull();
	~MonoHull() = default;
};

