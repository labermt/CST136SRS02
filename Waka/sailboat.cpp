#include "stdafx.h"
#include "sailboat.h"

Sailboat::Sailboat(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) :
	Boat(hull, chart, propulsion)
{
}

std::string Sailboat::doGetName() noexcept
{
	return "USS Archimedes";
}
