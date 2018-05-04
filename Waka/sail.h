#pragma once
#include "propulsion.h"

class Sail : public Propulsion
{
private:
	const int speed_{ 5 };

public:
	const int do_getKnots() override;
};