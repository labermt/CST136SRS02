#include "stdafx.h"
#include "raft.h"

std::string Raft::getName()
{
	return name_;
}

void Raft::nameBoat(std::string given)
{
	name_ = given;
}

