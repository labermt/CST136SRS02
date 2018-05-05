#pragma once
#include <string>
#include "Propulsion.h"
#include "Hull.h"
#include "Wind.h"
#include "Water.h"
#include "Chart.h"


class Boat
{
protected: 
	virtual ~Boat() = default;

public:
	Boat() = default;
	Boat(std::string boatName, Propulsion* propType);	

	virtual std::string getName() = 0;
	virtual void setHull(Hull* hullType) = 0;

	void setWindSpeed(int const windSpeed);
	void setWaterCurrentSpeed(int const waterSpeed);
	void bringChart();
	int getCurrentBoatSpeed() const;

private:
	std::string name{};

	Propulsion* myProp{ nullptr };
	Hull* myHull{ nullptr };

	Wind windConditions;
	Water waterConditions;

	Chart myChart;

};

