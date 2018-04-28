#pragma once
#include "Boat.h"
class Sailboat final : public Boat
{
public:
	Sailboat() = default;
	Sailboat(const std::string boatName) : Boat(boatName) {};	// use base class cstr
	~Sailboat() = default;

	std::string getName() override;
};

