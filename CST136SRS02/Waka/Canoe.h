#pragma once
#include "Boat.h"
class Canoe final : public Boat
{
public:
	Canoe() = default;
	Canoe(const std::string boatName) : Boat(boatName) {};	// use base class cstr)
	~Canoe() = default;

	std::string getName() override;
};

