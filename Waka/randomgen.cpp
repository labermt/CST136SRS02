#include "stdafx.h"
#include "randomgen.h"

unsigned randomGen(const unsigned max)
{
	// Create random number generator and generate a number between 0 and numDoors - 1
	static std::random_device rd;  //Will be used to obtain a seed for the random number engine
	static std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	const std::uniform_int_distribution<unsigned> dis(0, max - 1);

	return dis(gen);
}
