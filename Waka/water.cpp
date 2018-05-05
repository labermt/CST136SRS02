#include "stdafx.h"
#include "water.h"
#include "rand_gen.h"


Water::wave_size Water::get_wave_size() const
{
	return wave_size_;
}

Direction Water::get_current_direction() const
{
	return direction_;
}

void Water::change_wind_direction()
{
	auto const wind_direction = random_generate(4);
	switch (wind_direction)
	{
	case 0:
		direction_ = Direction::north;
		break;

	case 1:
		direction_ = Direction::east;
		break;

	case 2:
		direction_ = Direction::south;

	case 3:
		direction_ = Direction::west;
		break;

	default:
		direction_ = Direction::north;
		break;
	}
}

void Water::change_wave_size()
{
	auto const wave_size = random_generate(2);
	switch (wave_size)
	{
	case 0:
		wave_size_ = wave_size::small;
		break;

	case 1:
		wave_size_ = wave_size::large;
		break;

	default:
		wave_size_ = wave_size::small;
	}
}
