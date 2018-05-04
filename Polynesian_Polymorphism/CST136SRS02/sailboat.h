#pragma once
#include "boat.h"

class Sailboat : Boat
{
private:
	char marker_{ 's' };

public:
	std::string getName() override;
	void nameBoat(std::string) override;
};