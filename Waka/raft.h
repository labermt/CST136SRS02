#pragma once
#include "boat.h"

class Raft : public Boat
{
public:
	Raft(const Chart& chart) noexcept;
	std::string getName() const noexcept override;
};