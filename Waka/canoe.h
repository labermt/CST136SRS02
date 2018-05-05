#pragma once
#include "boat.h"

class Canoe : public Boat
{
private:

public:
	Canoe(const std::string name, Hull * hull);

	const std::string do_getName() override;

	void do_addPropulsion(Propulsion* d0) override;

	void do_turnRight() override;
	void do_turnLeft() override;
	void do_move() override;

	const int do_myspeed() override;
};
