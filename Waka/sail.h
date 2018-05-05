#pragma once
#include "propulsion.h"

class Sail final : public Propulsion
{
private:
	unsigned doGetKnots() const noexcept override { return 2; };
};

