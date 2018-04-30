#pragma once
#include "Hull.h"
class MultiHull : public Hull
{
protected:
	int do_get_min_turn_radius() const override;
	int do_get_max_wave_height() const override;
public:
	MultiHull();
	~MultiHull() = default;
};

