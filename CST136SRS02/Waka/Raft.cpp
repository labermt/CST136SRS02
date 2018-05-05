#include "stdafx.h"
#include "Raft.h"
#include "NoPropulsion.h"


Raft::Raft(const std::string boatName)
	: Boat(boatName, new NoPropulsion())
{
}

std::string Raft::getName()
{
	return Boat::getName();
}

void Raft::setHull(Hull* hullType)
{
	Boat::setHull(hullType);
}
