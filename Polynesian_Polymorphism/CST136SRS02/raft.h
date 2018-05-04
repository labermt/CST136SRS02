#pragma once
#include "boat.h"

class Raft : public Boat 
{
private:
	char marker_{ 'r' };

public:
	std::string getName() override;
	void nameBoat(std::string) override;
};

