#include "stdafx.h"
#include "MonoHull.h"

int MonoHull::do_get_min_turn_radius() const
{
	return Hull::do_get_min_turn_radius();
}

int MonoHull::do_get_max_wave_height() const
{
	return Hull::do_get_max_wave_height();
}

MonoHull::MonoHull()
	:Hull(45, 80)
{
}
