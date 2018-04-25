#include "stdafx.h"
#include "Canoe.h"
#include "Paddle.h"
#include "MonoHull.h"


Canoe::Canoe()
	: Boat(new Paddle, new MonoHull)
{
}


Canoe::~Canoe()
{
}

void Canoe::updateBoat(Water wa, Wind wi)
{
	
}