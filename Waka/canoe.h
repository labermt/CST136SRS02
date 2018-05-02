#pragma once
#include "boat.h"

class Canoe : 
	public Boat
{
	Hull hull_;
	Chart chart_;
	Propultion prop_;
	std::string name_;

protected:
	void do_move() override;
	void do_turn() override;
	std::string get_name() override;
public:
	Canoe(std::string name, hull);
	~Canoe();
};

