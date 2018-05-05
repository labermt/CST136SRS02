#pragma once
#include "propulsion.h"

class Sail : public Propulsion
{
protected:
	double getKnots() const noexcept override;

public:
	Sail() noexcept;
};