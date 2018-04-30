#include "stdafx.h"
#include "MultiHull.h"

int MultiHull::do_get_min_turn_radius() const
{
	return Hull::do_get_min_turn_radius();
}

int MultiHull::do_get_max_wave_height() const
{
	return Hull::do_get_max_wave_height();
}

MultiHull::MultiHull()
	:Hull(65, 70)
{
}