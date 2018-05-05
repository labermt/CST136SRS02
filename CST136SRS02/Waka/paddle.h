#pragma once
#include "propulsion.h"
class Paddle : public Propulsion
{
private:
	void doGetKnots() override;
};

