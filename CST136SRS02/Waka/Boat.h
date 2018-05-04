#pragma once
#include <string>
#include "Propulsion.h"
#include "Sail.h"


class Boat
{
protected: // A derived class member or friend may access the protected members of the base class only through a derived object
	virtual ~Boat() = default;
	Propulsion* myProp;

public:
	Boat() = default;
	Boat(const std::string boatName, Propulsion* propType);	// in-line function

	virtual std::string getName() = 0;

private:
	std::string name{};

};

