#include "propulsion.h"



const int propulsion::do_getKnots()
{
	return 0;
}

const int propulsion::paddle_()
{
	return 0;
}

const int propulsion::sail_()
{
	return 0;
}

propulsion::propulsion()
{
}

propulsion::propulsion(const int k0, const int k1) : sail_(k0), paddle_(k1)
{
	
}

const int propulsion::getKnots()
{
	return 0;
}

const int propulsion;;getKnots()
{
	return do_getKnots() * paddle_;
}

