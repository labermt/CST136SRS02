#pragma once
#include "propultion.h"

class Sail :
	public Propultion
{
	
	int get_speed() override;
public:
	Sail();
	~Sail();
};
