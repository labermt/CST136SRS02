#include "stdafx.h"
#include "current.h"
#include "random"


Current::Current() : directionOfCurrent(Cardinal::S), speed(10), height(0) {}

Cardinal Current::getDirection() const noexcept
{
	return directionOfCurrent;
}

std::string Current::getDirectionString() const noexcept
{
	switch (directionOfCurrent)
	{
	case Cardinal::N:
		return "North";
	case Cardinal::S:
		return "South";
	case Cardinal::E:
		return "East";
	case Cardinal::W:
		return "West";
	case Cardinal::NE:
		return "Northeast";
	case Cardinal::SE:
		return "Southeast";
	case Cardinal::NW:
		return "Northwest";
	case Cardinal::SW:
		return "Southwest";
	default:	return "No direction set";
	}
}

int Current::getspeed() noexcept
{
	return speed;
}

int Current::getHeight() noexcept
{
	return height;
}

void Current::setSpeed(const int s) noexcept
{
	speed = s;
}

void Current::setHeight() noexcept
{

	//rand generator
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distribution(0, 11);
	
	height = distribution(generator);

}

void Current::setDirection(const Cardinal direction) noexcept
{
	directionOfCurrent = direction;
}


