#pragma once
#include "Boat.h"

class Raft final : public Boat
{
public:
	Raft() = default;
	Raft(const std::string boatName) : Boat(boatName) {};	// use base class cstr
	~Raft() = default;

	std::string getName() override;

};

