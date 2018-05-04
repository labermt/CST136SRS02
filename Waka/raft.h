#pragma once
#include "boat.h"

class Raft : public Boat
{
private:
	std::string name_{};
	
	
	compass mycompass_{};
	Hull* myhull_{};

public:
	Raft(const std::string name, Hull * hull);

	std::string do_getName() override;
	
	void do_turnRight() override;
	void do_turnLeft() override;
	void do_move() override;

	environment::properties do_whatAmIOn() override;
};