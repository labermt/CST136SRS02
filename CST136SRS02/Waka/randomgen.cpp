#include "stdafx.h"
#include <random>

//taken from http://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution

static std::random_device rd;  //Will be used to obtain a seed for the random number engine
static std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
const std::uniform_int_distribution<unsigned> dis(0,3);