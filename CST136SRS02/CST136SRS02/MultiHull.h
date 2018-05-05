#pragma once
#include "Hull.h"
class MultiHull : public Hull
{
protected:
	int do_get_min_turn_radius() const noexcept override;
	int do_get_max_wave_height() const noexcept override;
public:
	MultiHull() noexcept;
};

