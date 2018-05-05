#pragma once
#include "boat.h"

class Sailboat : public Boat
{
private:

public:
	Sailboat(const std::string name, Hull * hull);

	const std::string do_getName() override;

	void do_addPropulsion(Propulsion* d0) override;

	void do_turnRight() override;
	void do_turnLeft() override;
	void do_move() override;

	const int do_myspeed() override;
};
