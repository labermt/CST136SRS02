#pragma once
#include "propulsion.h"

class Paddle final : public Propulsion
{
private:
	unsigned doGetKnots() const noexcept override { return 1; };

public:
	~Paddle() = default;
};

