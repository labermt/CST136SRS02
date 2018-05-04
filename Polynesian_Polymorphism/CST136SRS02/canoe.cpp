#include "stdafx.h"
#include "canoe.h"

std::string Canoe::getName()
{
	return name_;
}

void Canoe::nameBoat(std::string given)
{
	name_ = given;
}