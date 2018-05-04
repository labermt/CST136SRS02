#pragma once
#include <string>
#include "Propulsion.h"
#include "Hull.h"


class Boat
{
protected: // A derived class member or friend may access the protected members of the base class only through a derived object
	virtual ~Boat() = default;
	Propulsion* myProp{ nullptr };
	Hull* myHull{ nullptr };
	

public:
	Boat() = default;
	Boat(const std::string boatName, Propulsion* propType);	

	virtual std::string getName() = 0;
	virtual void setHull(Hull* hullType) = 0;

private:
	std::string name{};
	int maxBoatSpeed{};

};

