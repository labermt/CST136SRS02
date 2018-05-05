#include "stdafx.h"
#include <string>
#include "raft.h"
using namespace std::literals::string_literals;

std::string Raft::doGetName()
{
	return "Sea Witch"s;
}

Raft::Raft(): Boat(monoHull_, paddle_)
{
}
