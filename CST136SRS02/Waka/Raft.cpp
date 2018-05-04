#include "stdafx.h"
#include "Paddle.h"
#include "Raft.h"


Raft::Raft(const std::string boatName)
	: Boat(boatName, nullptr)
{
}

std::string Raft::getName()
{
	return Boat::getName();
}
