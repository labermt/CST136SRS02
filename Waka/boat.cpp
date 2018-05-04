#include "stdafx.h"
#include "boat.h"
#include "hull.h"
#include "propulsion.h"
#include <cassert>

std::string Boat::getName()
{
	return do_getName();
}

void Boat::turnRight()
{
	do_turnRight();
}

void Boat::turnLeft()
{
	do_turnLeft();
}

void Boat::move()
{
	do_move();
}

int Boat::myspeed()
{
	return do_myspeed();
}

environment::properties Boat::whatAmIOn()
{
	return do_whatAmIOn();
}

std::string Boat::do_getName()
{
	return "error";
}

void Boat::do_turnRight()
{ }

void Boat::do_turnLeft()
{ }

void Boat::do_move()
{
	if (theworld_.water_.getDirrection() == compass::orientation::north)
	{
		mychart_.setlat(theworld_.water_.getCurrentStrenght());
	}
	else if (theworld_.water_.getDirrection() == compass::orientation::ne)
	{
		mychart_.setlat(theworld_.water_.getCurrentStrenght());
		mychart_.setlng(theworld_.water_.getCurrentStrenght());
	}
	else if (theworld_.water_.getDirrection() == compass::orientation::east)
	{
		mychart_.setlng(theworld_.water_.getCurrentStrenght());
	}
	else if (theworld_.water_.getDirrection() == compass::orientation::se)
	{
		mychart_.setlat(-theworld_.water_.getCurrentStrenght());
		mychart_.setlng(theworld_.water_.getCurrentStrenght());
	}
	else if (theworld_.water_.getDirrection() == compass::orientation::south)
	{
		mychart_.setlat(-theworld_.water_.getCurrentStrenght());
	}
	else if (theworld_.water_.getDirrection() == compass::orientation::sw)
	{
		mychart_.setlat(-theworld_.water_.getCurrentStrenght());
		mychart_.setlng(-theworld_.water_.getCurrentStrenght());
	}
	else if (theworld_.water_.getDirrection() == compass::orientation::west)
	{
		mychart_.setlng(-theworld_.water_.getCurrentStrenght());
	}
	else if (theworld_.water_.getDirrection() == compass::orientation::nw)
	{
		mychart_.setlat(theworld_.water_.getCurrentStrenght());
		mychart_.setlng(-theworld_.water_.getCurrentStrenght());
	}
}

int Boat::do_myspeed()
{
	return 0;
}

environment::properties Boat::do_whatAmIOn()
{
	return environment::properties::kunknown;
}