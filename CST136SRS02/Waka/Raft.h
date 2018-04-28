#pragma once
#include "Boat.h"
class Raft final : public Boat
{
public:
	Raft();
	~Raft();
	void getName() override;
};

