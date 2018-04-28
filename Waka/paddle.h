#pragma once
#include "propultion.h"

class Paddle :
	public Propultion
{

	int get_speed() override;
public:
	Paddle();
	~Paddle();
};
