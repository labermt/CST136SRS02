#pragma once
#include "Boat.h"

class Raft final : public Boat
{
public:
	Raft() = default;
	Raft(const std::string boatName);	

	std::string getName() override;
	void setHull(Hull* hullType) override;

};

