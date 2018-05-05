#pragma once
#include "Propulsion.h"
class Paddle : public Propulsion
{
protected:
	int do_get_knots() const noexcept override;
public:
	Paddle() noexcept;
};

