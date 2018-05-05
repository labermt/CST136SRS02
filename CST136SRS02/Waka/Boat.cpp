#include "stdafx.h"
#include "Boat.h"


Boat::Boat(const std::string boatName, Propulsion* propType)
	:name(boatName), myProp(propType)
{
}

std::string Boat::getName()
{
	return name;
}

void Boat::setHull(Hull* hullType)
{
	myHull = hullType;
}

void Boat::setWindSpeed(int const windSpeed)
{
	windConditions.setWindSpeed(windSpeed);
}

void Boat::setWaterCurrentSpeed(int const waterSpeed)
{
	waterConditions.setWaterSpeed(waterSpeed);
}

void Boat::bringChart()
{
	myChart.equipChart();
}


int Boat::getCurrentBoatSpeed() const
{
	auto const windSpeedRatio{ 3 }; // according to wiki winds can drive the sail boats 3.35 times the speed of the wind

	auto const adjustForWinds{ windConditions.returnWindSpeed() * windSpeedRatio  }; // treating wind direction as a constant tailwind

	auto const waterCurrentSpeed{ waterConditions.returnWaterSpeed() };

	auto const currentBoatSpeed{ ( myProp->currentKnots() + adjustForWinds ) - waterCurrentSpeed }; // add initial boat speed to added wind speed and subtract the water current speed

	return currentBoatSpeed;
}
