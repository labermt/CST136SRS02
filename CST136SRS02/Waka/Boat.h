#pragma once
#include <string>
#include "Wind.h"
#include "Chart.h"
#include "Water.h"
#include "Propulsion.h"


class Boat
{
protected: // A derived class member or friend may access the protected members of the base class only through a derived object
	virtual ~Boat() = default;

public:
	Boat() = default;
	Boat(const std::string boatName);	// in-line function

	virtual std::string getName() = 0;

	

private:
	std::string name{};
};

