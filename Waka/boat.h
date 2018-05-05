#pragma once
#include <string>
#include "hull.h"
#include <vector>
#include "propulsion.h"
#include "chart.h"

class Boat
{
public:
	Boat(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion);

protected:
	virtual ~Boat() = default;

protected:
	virtual std::string doGetName() noexcept = 0;

public:
	std::string getName() noexcept;
	void moveBoat(Direction direction);
	void setSail();

public:
	Hull const& hull_;
	Chart &chart_;
	std::vector<Propulsion*>& propulsion_;

	unsigned maxSpeed_{ 0 };
	GPS gps_{ GPS(10,4) };
};

