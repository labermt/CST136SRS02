#pragma once
#include "boat.h"

class Sailboat final : public Boat
{
public:
	Sailboat(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion);
public:
	std::string doGetName() noexcept override;
};

