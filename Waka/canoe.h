#pragma once
#include "boat.h"

class Canoe final : public Boat
{
public:
	Canoe(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion);

private:
	std::string doGetName() noexcept override;
};

