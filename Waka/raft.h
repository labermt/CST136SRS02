#pragma once
#include "boat.h"

class Raft final : public Boat
{
public:
	Raft(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) noexcept;
	~Raft() = default;

private:
	std::string doGetName() noexcept override;
	void doVoyage() override;
};

