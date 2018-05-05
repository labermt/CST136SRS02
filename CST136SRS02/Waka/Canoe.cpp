#include "stdafx.h"
#include "Canoe.h"
#include "Paddle.h"


Canoe::Canoe(const std::string boatName)
	: Boat(boatName, new Paddle())
{
}

std::string Canoe::getName()
{
	return Boat::getName();
}

void Canoe::setHull(Hull* hullType)
{
	Boat::setHull(hullType);
}

