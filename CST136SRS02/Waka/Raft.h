#pragma once
#include "Boat.h"

class Raft final : public Boat
{
public:
	Raft() = default;
	Raft(const std::string boatName);	
	~Raft() = default;

	std::string getName() override;
	void setHull() override;

};

