#ifndef WIND_H
#define WIND_H

#include "Current.h"

class Wind
{
public:
	Wind(Current& current);

private:
	Current current_;

};
#endif
//association w/ Boat
//has-a relationship with Current