#pragma once
#include "propultion.h"

class Sail :
	public Propultion
{
	movement speed_{ movement::fast };

	int do_get_knots() override;
public:
	Sail();
	~Sail();
};
