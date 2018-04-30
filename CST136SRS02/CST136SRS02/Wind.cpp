#include "stdafx.h"
#include "Wind.h"
#include <random>


Wind::Wind()
	:direction{ Direction::North }, mph{ 20 }
{
}

Wind::Direction Wind::getDirection() const
{
	return direction;
}

int Wind::getMPH() const
{
	return mph;
}

void Wind::update()
{
	//setup random generator
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distr(0, 3);

	//random direction
	switch(distr(generator))
	{
	case 0:
		direction = Direction::North;
		break;
	case 1:
		direction = Direction::East;
		break;
	case 2:
		direction = Direction::South;
		break;
	case 3:
		direction = Direction::West;
		break;
	default:
		direction = Direction::North;
		break;
	}

	//random speed, smoothed
	distr = std::uniform_int_distribution<int>(getMPH() - 10, getMPH() + 10);
	const int newSpeed = distr(generator);
	if (newSpeed < 0) mph = 0;
	else mph = newSpeed;
}