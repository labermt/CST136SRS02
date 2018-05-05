#include "stdafx.h"
#include "randomdirection.h"
#include "random"

Cardinal Randomdirection::generate() noexcept
{
	//rand generator
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distribution(0, 7);


	switch (distribution(generator))
	{
	case 0:
		return Cardinal::N;
	case 1:
		return Cardinal::S;	
	case 2:
		return Cardinal::E;	
	case 3:
		return Cardinal::W;		
	case 4:
		return Cardinal::NW;		
	case 5:
		return Cardinal::NE;		
	case 6:
		return Cardinal::SW;		
	case 7:
		return Cardinal::SE;
	default:
		return Cardinal::N;
	}
}
