#pragma once
#include "propulsion.h"

class Sail : public Propulsion
{
private:
	const int speed_{ 3 };

public:
	const int do_getKnots() override;
};