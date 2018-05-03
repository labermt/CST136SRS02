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
	Chart chart;
	Hull * hull;
	Propulsion * propulsion;
protected:
	virtual std::string do_get_name() const = 0; //behind the scenes function
	virtual ~Boat() = default;
public:
	std::string getName() const; //publicly used get name
	Boat(std::string boatName, Hull * hull_, Propulsion * propulsion_);
	bool isCapsized() const;
	void capsizeBoat();

	Chart getChart() const;
	Hull * getHull() const;
	Propulsion * getPropulsion() const;

	//add move towards function
};

