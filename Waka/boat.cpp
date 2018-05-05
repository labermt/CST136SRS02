#include "stdafx.h"
#include "boat.h"
#include "multi_hull.h"


void Boat::start_voyage()
{
	int clock{ 0 };
}

Boat::Boat(std::string const name, Hull& hull_type, std::vector<Propulsion*>& prop, Chart& chart):
	name_{ name }, hull_{ hull_type }, propulsion_{ prop }, chart_{ chart }
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

std::string Boat::get_name()
{
	return do_get_name();
}
