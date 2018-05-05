#pragma once
#include "Propulsion.h"
class Paddle final : public Propulsion
{
public:
	Paddle();

	void getKnots() override;
};

