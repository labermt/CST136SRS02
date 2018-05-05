#pragma once
#include "boat.h"

class Sailboat : public Boat
{
protected:
	void setAngle(double angle) override;

public:
	Sailboat(const Chart& chart) noexcept;
	std::string getName() const noexcept override;
};