#include "stdafx.h"
#include "chart.h"


Chart::Chart() : milesFirst(380), milesSecond(618), milesThird(210), milesFourth(941), milesFinal(468){}

int Chart::getMilesFirst()
{
	return milesFirst;
}

int Chart::getMilesSecond()
{
	return milesSecond;
}

int Chart::getMilesThird()
{
	return milesThird;
}

int Chart::getMilesFourth()
{
	return milesFourth;
}

int Chart::getMilesFinal()
{
	return milesFinal;
}

void Chart::setMilesFirst(int milesTraveled)
{
	milesFirst = milesFirst - milesTraveled;
}

void Chart::setMilesSecond(int milesTraveled)
{
	milesSecond = milesSecond - milesTraveled;
}

void Chart::setMilesThird(int milesTraveled)
{
	milesThird = milesThird - milesTraveled;
}

void Chart::setMilesFourth(int milesTraveled)
{
	milesFourth = milesFourth - milesTraveled;
}

void Chart::setMilesFinal(int milesTraveled)
{
	milesFinal = milesFinal - milesTraveled;
}

