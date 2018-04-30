#include "stdafx.h"
#include "Sailboat.h"

std::string Sailboat::do_get_name() const
{
	return Boat::do_get_name();
}

Sailboat::Sailboat(std::string name) : Boat(name)
{
}
