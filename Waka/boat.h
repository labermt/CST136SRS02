#pragma once
#include <string>
#include <vector>
#include <memory>
#include "chart.h"
#include "propulsion.h"
#include "hull.h"
#include "wind.h"
#include "water.h"
//#include "gsl.h"

class Boat
{
private:
	static constexpr double kmPerKnot = 1.852 * 24; // Knots are 1.852 kmph, & each run of the loop is one day; 24 hours

	int daysPassed_;
	double angle_;

protected:
	using PropulsionPtr = const Propulsion*;
	// Reasoning for not using a smart ptr; unique_ptrs need to be moved to make sure there is only one owner, but
	// initialization lists don't allow for moving things outside of them (as far as I can tell). I was not
	// confident in what I was doing to get the pointers moved, so I decided that it would be better to use what
	// I know.

	Chart chart_;
	const std::vector<PropulsionPtr> propulsions_;
	const std::unique_ptr<const Hull> hull_;
	double windDirection_;

	virtual void setAngle(const double angle);
	virtual void checkIfCapsized(const Water& water, const Wind& wind) const;
	virtual std::string getName() const noexcept = 0;

public:
	Boat() = delete;
	Boat(const Boat&) = default;
	Boat(Boat&&) = default;
	Boat& operator=(const Boat&) = default;
	Boat& operator=(Boat&&) = default;

	Boat(const Chart& chart, const std::vector<PropulsionPtr>& propulsions, std::unique_ptr<Hull>&& hull) noexcept;
	virtual ~Boat();

	std::string doGetName() const noexcept;

	void testVoyage(Wind& wind, Water& water);

	int getDaysPassed() const noexcept;
};