#pragma once
#include <string>
#include "Propulsion.h"
#include "Hull.h"
#include "Wind.h"
#include "Water.h"


class Boat
{
protected: // A derived class member or friend may access the protected members of the base class only through a derived object
	virtual ~Boat() = default;

public:
	Boat() = default;
	Boat(std::string boatName, Propulsion* propType);	

	virtual std::string getName() = 0;
	virtual void setHull(Hull* hullType) = 0;

	void setWindSpeed(int const windSpeed);
	void setWaterCurrentSpeed(int const waterSpeed);

private:
	std::string name{};
	int currentSpeed{};

	Propulsion* myProp{ nullptr };
	Hull* myHull{ nullptr };

	Wind windConditions;
	Water waterConditions;

};

