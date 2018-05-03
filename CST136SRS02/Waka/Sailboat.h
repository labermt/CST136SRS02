#pragma once
#include "Boat.h"
#include "Sail.h"

class Sailboat final : public Boat
{
public:
	Sailboat() = default;
	Sailboat(const std::string boatName);	
	~Sailboat() = default;

	std::string getName() override;

private:
	Sail hasSail;
};

