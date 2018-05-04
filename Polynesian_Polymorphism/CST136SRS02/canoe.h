#pragma once
#include "boat.h"

class Canoe : Boat
{
private:
	const char marker_{ 'c' };

public:
	std::string getName() override;
	void nameBoat(std::string) override;
};