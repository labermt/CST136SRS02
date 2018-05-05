#pragma once
#include <string>
#include "Chart.h"
#include "Hull.h"
#include "Propulsion.h"

class Boat
{
private:
	std::string name;
	bool capsized = false;
	bool journeyComplete = false;
	Chart chart;
	Hull * hull;
	Propulsion * propulsion;
protected:
	virtual std::string do_get_name() const = 0; //behind the scenes function
public:
	std::string getName() const noexcept; //publicly used get name
	Boat(std::string boatName, Hull * hull_, Propulsion * propulsion_);
	bool isCapsized() const noexcept;
	bool isJourneyComplete() const noexcept;
	void capsizeBoat() noexcept;
	void completeJourney() noexcept;

	Chart & getChart() noexcept;
	Hull * getHull() const noexcept;
	Propulsion * getPropulsion() const noexcept;

	//add move towards function
};

