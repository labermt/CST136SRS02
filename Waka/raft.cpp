#include "stdafx.h"
#include "raft.h"

Raft::Raft(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) :
	Boat(hull, chart, propulsion)
{
}

std::string Raft::doGetName()noexcept
{
	return "USS Black Jim";
}
