#include "stdafx.h"
#include "Raft.h"
#include <string>

std::string Raft::do_get_name() const
{
	return Boat::do_get_name();
}

Raft::Raft(std::string name): Boat(name)
{
}

Raft::~Raft()
{
}
