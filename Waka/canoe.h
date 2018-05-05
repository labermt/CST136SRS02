#pragma once
#include "boat.h"

class Canoe : 
	public Boat
{
protected:
	//void do_move() override;
	//void do_turn(Direction directon) override;
	std::string do_get_name() override;

public:
	Canoe(std::string name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart);
};

