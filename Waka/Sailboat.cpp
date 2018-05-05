#include "stdafx.h"

#include "Sailboat.h"

Sailboat::Sailboat(std::string const name, Propulsion & prop, Hull & hull):
Boat(name, prop, hull)
{}

void Sailboat::nav(Navigation & nav)
{
	setNav(nav);
}

std::string Sailboat::doGetName() noexcept
{
	return Boat::getName();
}