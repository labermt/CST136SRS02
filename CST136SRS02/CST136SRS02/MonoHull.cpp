#include "stdafx.h"
#include "MonoHull.h"

int MonoHull::do_get_min_turn_radius() const noexcept
{
	return Hull::do_get_min_turn_radius();
}

int MonoHull::do_get_max_wave_height() const noexcept
{
	return Hull::do_get_max_wave_height();
}

MonoHull::MonoHull() noexcept
	:Hull(25, 80)
{
}
