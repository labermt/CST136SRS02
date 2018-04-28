#pragma once
#include "boat.h"

class Canoe :
	public Boat
{

	void do_move() override;
	void turn() override;
	std::string get_name() override;
public:
	
};

