#pragma once
#include "boat.h"

class Canoe : public Boat
{
private:
	const char marker_{ 'c' };

public:
	std::string getName() override;
	void nameBoat(std::string) override;
	void pushIn(int, int) override;
	void move();
	char checkAhead();
};