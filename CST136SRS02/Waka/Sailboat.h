#pragma once
#include "Boat.h"
class Sailboat final: public Boat
{
public:
	Sailboat();
	~Sailboat();
	void getName() override;
};

