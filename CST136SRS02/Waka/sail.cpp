#include "stdafx.h"
#include "sail.h"


Sail::Sail()
{
}


Sail::~Sail()
{
}

void Sail::setDirection(Cardinal direction)
{
	this->direction = direction;
}

Cardinal Sail::getDirection() const
{
	return direction;
}
