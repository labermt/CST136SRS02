#include "stdafx.h"
#include "boat.h"
#include "hull.h"
#include "propulsion.h"

Boat::Boat(std::string name, Hull* hull) : name_(name), myhull_(hull)
{ }

std::string Boat::getName() const
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

void Boat::addPropulsion(Propulsion* d0)
{
	do_addPropulsion(d0);
}

int Boat::myspeed() const
{
	return do_myspeed();
}

environment::properties Boat::whatAmIOn() const
{
	return theworld_.getTileProperties(mychart_.getlat(), mychart_.getlng());
}

bool Boat::getcaptsized_() const
{
	return captsized_;
}

std::string Boat::do_getName() const
{
	return "error";
}

void Boat::do_turnRight()
{ }

void Boat::do_turnLeft()
{ }

void Boat::do_move()
{
	switch(theworld_.water_.getDirrection())
	{
	case compass::orientation::north:
		mychart_.setlat(-theworld_.water_.getCurrentStrenght());
		break;
	case compass::orientation::ne:
		mychart_.setlat(-theworld_.water_.getCurrentStrenght());
		mychart_.setlng(theworld_.water_.getCurrentStrenght());
		break;
	case compass::orientation::east:
		mychart_.setlng(theworld_.water_.getCurrentStrenght());
		break;
	case compass::orientation::se:
		mychart_.setlat(theworld_.water_.getCurrentStrenght());
		mychart_.setlng(theworld_.water_.getCurrentStrenght());
		break;
	case compass::orientation::south:
		mychart_.setlat(theworld_.water_.getCurrentStrenght());
		break;
	case compass::orientation::sw:
		mychart_.setlat(theworld_.water_.getCurrentStrenght());
		mychart_.setlng(-theworld_.water_.getCurrentStrenght());
		break;
	case compass::orientation::west:
		mychart_.setlng(-theworld_.water_.getCurrentStrenght());
		break;
	case compass::orientation::nw:
		mychart_.setlat(-theworld_.water_.getCurrentStrenght());
		mychart_.setlng(-theworld_.water_.getCurrentStrenght());
		break;
	}

	if (theworld_.water_.getWaveHeight() > myhull_->maxWaveHeight())
	{
		captsized_ = true;
	}
}

void Boat::do_addPropulsion(Propulsion* d0)
{ }

int Boat::do_myspeed() const
{
	return 0;
}