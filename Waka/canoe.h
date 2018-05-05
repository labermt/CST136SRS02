#pragma once
#include "boat.h"

class Canoe : public Boat
{
public:
	Canoe(const Chart& chart) noexcept;
	std::string getName() const noexcept override;
};