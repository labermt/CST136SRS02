#include "stdafx.h"
#include "Sailboat.h"
#include "MultiHull.h"
#include "Sail.h"

std::string Sailboat::do_get_name() const
{
	return Boat::do_get_name();
}

Sailboat::Sailboat(std::string name) : Boat(name, new MultiHull(),  new Sail())
{
}
