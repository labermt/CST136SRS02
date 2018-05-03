#include "stdafx.h"
#include "raft.h"

Raft::Raft(Hull const& hull):
Boat::Boat(hull)
{

}

void Raft::doGetName()noexcept
{
	Boat::doGetName();
	// TODO: Raft specific names
}
