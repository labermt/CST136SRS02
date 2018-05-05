#pragma once
#include "propulsion.h"


class paddle :
	public propulsion
{
private:
	const int speed_{ 3 };
public:
	virtual const int do_getKnots();
};

