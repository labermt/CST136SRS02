#include "stdafx.h"
#include "sailboat.h"

std::string Sailboat::getName()
{
	return name_;
}

void Sailboat::nameBoat(std::string given)
{
	name_ = given;
}