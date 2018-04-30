#include "stdafx.h"
#include "Boat.h"


std::string Boat::do_get_name() const
{
	return name;
}

std::string Boat::getName() const
{
	return do_get_name();
}

Boat::Boat(std::string boatName)
	:name{boatName}
{
}

bool Boat::isCapsized() const
{
	return capsized;
}

void Boat::capsizeBoat()
{
	capsized = true;
}
