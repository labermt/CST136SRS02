#ifndef BOAT_H
#define BOAT_H
#include <string>
#include "Hull.h"
#include "Propulsion.h"

class Boat
{
private:
	//data members_;

private:
	Boat();
	virtual ~Boat() = default; //would create a non-virtual destructor otherwise

public:
	virtual std::string getName() = 0;
};
//public and virtual || protected and non-
//make Boat abstract
#endif