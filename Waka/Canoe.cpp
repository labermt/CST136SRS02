#include "stdafx.h"

#include "Canoe.h"

Canoe::Canoe(std::string const name, Propulsion & prop, Hull & hull):
Boat(name, prop, hull)
{}

void Canoe::nav(Navigation & nav)
{
	setNav(nav);
}

std::string Canoe::doGetName() noexcept
{
	return Boat::getName();
}
