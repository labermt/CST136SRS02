#include "stdafx.h"
#include "Raft.h"


Raft::Raft(std::string const name, Propulsion & prop, Hull & hull):
Boat(name, prop, hull)
{}

void Raft::nav(Navigation & nav)
{
	setNav(nav);
}

std::string Raft::doGetName() noexcept
{
	return Boat::getName();
}
