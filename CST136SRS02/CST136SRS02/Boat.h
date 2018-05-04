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
	~Boat() = default;
public:
	std::string getName() const; //publicly used get name
	Boat(std::string boatName, Hull * hull_, Propulsion * propulsion_);
	bool isCapsized() const;
	bool isJourneyComplete() const;
	void capsizeBoat();
	void completeJourney();

	Chart & getChart();
	Hull * getHull() const;
	Propulsion * getPropulsion() const;

	//add move towards function
};

