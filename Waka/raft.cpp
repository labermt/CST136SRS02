#include "stdafx.h"
#include "raft.h"

Raft::Raft(const std::string name, Hull * hull) : Boat(name, hull)
{ }

const std::string Raft::do_getName()
{
	return name_;
}