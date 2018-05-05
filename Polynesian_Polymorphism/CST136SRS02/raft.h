#pragma once
#include "boat.h"

class Raft : public Boat 
{
private:
	const char marker_{ 'r' };
	Water water_;

public:
	std::string getName() override;
	void nameBoat(std::string) override;
	void pushIn(int, int) override;
	void move() override;
	char checkAhead() override;
};

