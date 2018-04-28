#pragma once
#include "boat.h"

class Canoe :
	public Boat
{

	void move() override;
	void turn() override;
	std::string get_name() override;
public:
	
};

