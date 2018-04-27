#pragma once
#include "propulsion.h"

class sail
{
private:
	propulsion propulsion_{};
	const int speed_{ 5 };

public:
	const int getSpeed();
};