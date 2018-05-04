#include "stdafx.h"
#include "Sailboat.h"
#include "Sail.h"


Sailboat::Sailboat(const std::string boatName)
	: Boat(boatName, new Sail())
{
}

std::string Sailboat::getName()
{
	return Boat::getName();
}



