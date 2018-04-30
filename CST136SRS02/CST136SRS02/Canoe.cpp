#include "stdafx.h"
#include "Canoe.h"

std::string Canoe::do_get_name() const
{
	return Boat::do_get_name();
}

Canoe::Canoe(std::string name) : Boat(name)
{
}
