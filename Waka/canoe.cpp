#include "stdafx.h"
#include "canoe.h"

Canoe::Canoe(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) :
	Boat(hull, chart, propulsion)
{
}
std::string Canoe::doGetName() noexcept
{

	return "USS Pocahontas";
}
