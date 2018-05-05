#pragma once
#include <string>
#include "hull.h"
#include <vector>
#include "propulsion.h"
#include "chart.h"

class Boat
{
public:
	Boat(Hull const& hull, Chart& chart, std::vector<Propulsion*>& propulsion) noexcept;

protected:
	~Boat() = default;

protected:
	virtual std::string doGetName() noexcept = 0;
	virtual void doVoyage() = 0;

public:
	std::string getName() noexcept;
	void Voyage() { doVoyage(); };

	void moveBoat(Direction direction);

protected:
	Hull const& hull_;
	Chart const& chart_;
	std::vector<Propulsion*>& propulsion_;

	unsigned maxSpeed_{ 0 };
	GPS gps_{ GPS(10,4) };
	bool boatGood_{ true };
};

