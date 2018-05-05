#pragma once
#include "boat.h"

class Canoe final : public Boat
{
public:
	Canoe(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) noexcept;
	~Canoe() = default;

private:
	std::string doGetName() noexcept override;
	void doVoyage() override;
};

