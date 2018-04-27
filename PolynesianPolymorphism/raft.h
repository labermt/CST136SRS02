#pragma once
#include "boat.h"

class Raft : public Boat
{
public:
	std::string getName() override;
};