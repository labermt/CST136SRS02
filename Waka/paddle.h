#pragma once
#include "Propulsion.h"

class Paddle :
	public Propulsion
{

	int get_speed() override;
public:
	Paddle();
	~Paddle();
};
