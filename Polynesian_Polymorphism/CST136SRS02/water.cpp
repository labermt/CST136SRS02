#include "stdafx.h"
#include "water.h"
#include <random>

int Water::changeCurrent()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	const std::uniform_int_distribution<> dis(0, 3);
	return dis(gen);
}

int Water::getCurrent()
{
	if (counter % 5 == 0)
	{
		current_ = changeCurrent();
	}
	return current_;
}

