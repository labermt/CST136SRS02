#pragma once
#include "boat.h"

class Canoe : public Boat
{
protected:
	void do_move() override;
	void turn() override;
	std::string get_name() override;
public:
	Canoe(std::string name, hull);
	~Canoe();
};

