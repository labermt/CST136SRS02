#include "stdafx.h"
#include "wind.h"
#include <random>


Wind::Wind() : speed(0), direction(Cardinal::N) {}

int Wind::getSpeed() noexcept
{
	return speed;
}

Cardinal Wind::getDirection() noexcept
{
	return direction;
}

std::string Wind::getDirectionString() noexcept
{
	//could have used Boost preprocessing stuff for enum conversion, but didn't understand how it worked, so implimented a switch for output
	switch (direction)
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

void Wind::setSpeed(const int randomInt) noexcept
{
	speed = randomInt;
}

void Wind::setDirection() noexcept
{

	//rand generator
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distribution(0, 7);

	switch (distribution(generator)) 
	{
	case 0:
		direction = Cardinal::N;
		break;
	case 1:
		direction = Cardinal::S;
		break;
	case 2:
		direction = Cardinal::E;
		break;
	case 3:
		direction = Cardinal::W;
		break;
	case 4:
		direction = Cardinal::NW;
		break;
	case 5:
		direction = Cardinal::NE;
		break;
	case 6:
		direction = Cardinal::SW;
		break;
	case 7:
		direction = Cardinal::SE;
		break;
	}

}



