#pragma once
#include <random>

int inline random_generate(int const max) 
{
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<int> const rand_num(0, (max - 1));
	return rand_num(gen);
}
