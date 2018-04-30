#pragma once
#include <string>
#include "Chart.h"

class Boat
{
private:
	std::string name;
	bool capsized = false;
	Chart chart;
protected:
	virtual std::string do_get_name() const = 0; //behind the scenes function
	virtual ~Boat() = default;
public:
	std::string getName() const; //publicly used get name
	Boat(std::string);
	bool isCapsized() const;
	void capsizeBoat();

	Chart getChart() const;

	//add move towards function
};

