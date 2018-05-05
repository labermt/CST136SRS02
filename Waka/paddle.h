#pragma once
#include "propulsion.h"

class Paddle : public Propulsion
{
private:
	const int speed_{ 2 };

public:
	const int do_getKnots() override;
};