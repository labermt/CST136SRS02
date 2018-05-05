#include "stdafx.h"
#include "raft.h"


std::string Raft::do_get_name()
{
	return name_;
}

Raft::Raft(std::string const name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart) :
	Boat(name,hull_type, prop, chart)
{
}
