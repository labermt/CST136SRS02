#include "stdafx.h"
#include "Boat.h"


Boat::Boat(const std::string boatName)
	:name(boatName)
{
}

std::string Boat::getName()
{
	return this->name;
}
