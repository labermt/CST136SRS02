#pragma once
#include "propulsion.h"


class sail :
	public propulsion
{
private:
	const int speed_{ 8 };
public:
	const int do_getKnots();
};

