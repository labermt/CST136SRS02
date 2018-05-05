#include "stdafx.h"
#include "Sailboat.h"
#include "Sail.h"
#include "MultiHull.h"


Sailboat::Sailboat()
	: Boat (new Sail, new MultiHull)
{
}

Sailboat::Sailboat(Hull *h)
	: Boat(new Sail, h)
{
}

Sailboat::~Sailboat()
{
}

void Sailboat::updateBoat(Water wa, Wind wi)
{
	
}