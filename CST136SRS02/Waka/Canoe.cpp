#include "stdafx.h"
#include "Canoe.h"



Canoe::Canoe(const std::string boatName)
	: Boat(boatName)
{
	hasPaddle.getKnots();
}

std::string Canoe::getName()
{
	return Boat::getName();
}

