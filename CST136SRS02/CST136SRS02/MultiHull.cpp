#include "stdafx.h"
#include "MultiHull.h"

int MultiHull::do_get_min_turn_radius() const noexcept
{
	return Hull::do_get_min_turn_radius();
}

int MultiHull::do_get_max_wave_height() const noexcept
{
	return Hull::do_get_max_wave_height();
}

MultiHull::MultiHull() noexcept
	:Hull(15, 70)
{
}