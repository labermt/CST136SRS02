#pragma once
#include "Boat.h"

class Sailboat final : public Boat
{
public:
	Sailboat() = default;
	Sailboat(const std::string boatName);
	~Sailboat() = default;

	std::string getName() override;
	void setHull(Hull* hullType) override;

};

