#include "stdafx.h"
#include "hull.h"

// blank intentionally 
Hull::turn_radius Hull::get_turn_radius() const
{
	return do_get_turn_rad();
}

Hull::max_wave_height Hull::get_max_wave_height() const
{
	return do_get_max_wave_height();
}
