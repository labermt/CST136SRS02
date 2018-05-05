#pragma once
#include "propulsion.h"

class Paddle : public Propulsion
{
protected:
	double getKnots() const noexcept override;

public:
	Paddle() noexcept;
};