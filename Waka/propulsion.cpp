#include "stdafx.h"
#include "propulsion.h"

Propulsion::Propulsion(const int d0, const int d1) : paddles_(d0), sails_(d1)
{ }

const int Propulsion::getKnots()
{
	return do_getKnots() * paddles_;

}

const int Propulsion::do_getKnots()
{
	return 0;
}