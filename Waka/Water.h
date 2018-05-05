#ifndef WATER_H
#define WATER_H

#include "Current.h"

class Water
{
public:
	Water(Current& current);

private:
	Current current_; //this has direction and speed.	
};
#endif
//association w/ Boat
//has-a relationship with Current