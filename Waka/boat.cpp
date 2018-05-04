#include "stdafx.h"
#include "boat.h"
#include "hull.h"
#include "propulsion.h"

Boat::Boat(std::string name) : name_(name)
{ }

std::string Boat::getName()
{
	return do_getName();
}

std::string Boat::do_getName()
{
	return std::string();
}