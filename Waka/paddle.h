#pragma once
#include "propulsion.h"

class paddle
{
private:
	propulsion propulsion_{};
	const int speed_{ 2 };

public:
	const int getSpeed();
};