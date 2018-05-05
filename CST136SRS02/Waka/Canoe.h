#pragma once
#include "Boat.h"

class Canoe final : public Boat
{
public:
	Canoe() = default;
	Canoe(const std::string boatName);

	std::string getName() override;
	void setHull(Hull* hullType) override;

};

