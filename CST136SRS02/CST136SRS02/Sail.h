#pragma once
#include "Propulsion.h"
class Sail : public Propulsion
{
protected:
	int do_get_knots() const noexcept override;
public:
	Sail() noexcept;
	~Sail() = default;
};

