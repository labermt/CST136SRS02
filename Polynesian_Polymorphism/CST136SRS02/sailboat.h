#pragma once
#include "boat.h"

class Sailboat : Boat
{
private:
	const char marker_{ 's' };

public:
	std::string getName() override;
	void nameBoat(std::string) override;
	void pushIn(int, int) override;
	void move();
	char checkAhead();
};