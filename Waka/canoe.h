#pragma once
#include "boat.h"

class Canoe : public Boat
{
private:
	std::string name_{};

public:
	Canoe(const std::string name, Hull * hull);

	std::string do_getName() override;

	void do_turnRight() override;
	void do_turnLeft() override;
};
