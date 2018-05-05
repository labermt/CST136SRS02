#include "stdafx.h"
#include "boat.h"
#include "multi_hull.h"


void Boat::start_voyage()
{
	int clock{ 0 };
}

Boat::Boat(std::string const name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart):
	name_{ name }, hull_{ hull_type },propulsion_{ prop }, chart_{ chart }
{
}

void Boat::move()
{
	// move
}

void Boat::turn(Direction directon)
{
	if (hull_.get_turn_radius() == Hull::turn_radius::large)
	{
		move();
	}
	heading_ = directon;
}

Hull::turn_radius Boat::get_turn_radius()
{
	return hull_.get_turn_radius();
}

Hull::max_wave_height Boat::get_max_wave_height()
{
	return hull_.get_max_wave_height();
}

int Boat::get_knots()
{
	auto knots{ 0 };
	for (Propulsion& element : propulsion_)
	{
		knots += element;
	}
	return knots;
}

std::string Boat::get_name()
{
	return do_get_name();
}
