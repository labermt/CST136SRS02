#include "stdafx.h"
#include "canoe.h"
#include "multi_hull.h"
#include "mono_hull.h"

//void Canoe::do_turn(Direction directon)
//{
//}

std::string Canoe::do_get_name()
{
	return name_;
}

Canoe::Canoe(std::string const name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart) :
	Boat(name, hull_type,prop, chart)
{
}
