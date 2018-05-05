#pragma once
#include "Boat.h"

class Canoe final : public Boat
{
public:
	Canoe() = default;
	Canoe(const std::string boatName);
	~Canoe() = default;

	std::string getName() override;
	void setHull(Hull* hullType) override;

};

