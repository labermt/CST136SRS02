#include "stdafx.h"
#include "sailboat.h"

std::string Sailboat::doGetName()
{
	return "Aquaholic"s;
}

Sailboat::Sailboat() : Boat(multiHull_, sail2_)
{
}
