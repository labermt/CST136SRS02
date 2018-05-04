#pragma once
#include "boat.h"

class Canoe : Boat
{
private:
	char marker_{ 'c' };

public:
	std::string getName() override;
	void nameBoat(std::string) override;
};