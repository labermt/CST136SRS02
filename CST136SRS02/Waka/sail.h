#pragma once
#include "propulsion.h"

class Sail : public Propulsion
{
private:
	void doGetKnots() override;
};

