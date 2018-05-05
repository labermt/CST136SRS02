#include "stdafx.h"
#include "multi_hull.h"

Hull::turn_radius Multi_hull::do_get_turn_rad() const
{
	return min_turn_radius_;
}

Hull::max_wave_height Multi_hull::do_get_max_wave_height() const
{
	return max_wave_height_;
}