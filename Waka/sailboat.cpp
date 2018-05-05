#include "stdafx.h"
#include "sailboat.h"

Sailboat::Sailboat(const std::string name, Hull * hull) : Boat(name, hull)
{ }

const std::string Sailboat::do_getName()
{
	return name_;
}

void Sailboat::do_addPropulsion(Propulsion * d0)
{
	power_.push_back(d0);
}

void Sailboat::do_turnRight()
{
	mycompass_.setdirrection(mycompass_.intToDirrection(mycompass_.dirrectionToInt(mycompass_.getdirrection()) + myhull_->minTurnRadius()));
}

void Sailboat::do_turnLeft()
{
	mycompass_.setdirrection(mycompass_.intToDirrection(mycompass_.dirrectionToInt(mycompass_.getdirrection()) - myhull_->minTurnRadius()));
}

void Sailboat::do_move()
{
	if (theworld_.water_.getCurrentStrenght() > do_myspeed())
	{
		Boat::do_move();
	}
	else
	{
		switch (mycompass_.getdirrection())
		{
		case compass::orientation::north:
			mychart_.setlat(-1);
			break;
		case compass::orientation::ne:
			mychart_.setlat(-1);
			mychart_.setlng(1);
			break;
		case compass::orientation::east:
			mychart_.setlng(1);
			break;
		case compass::orientation::se:
			mychart_.setlat(1);
			mychart_.setlng(1);
			break;
		case compass::orientation::south:
			mychart_.setlat(1);
			break;
		case compass::orientation::sw:
			mychart_.setlat(1);
			mychart_.setlng(-1);
			break;
		case compass::orientation::west:
			mychart_.setlng(-1);
			break;
		case compass::orientation::nw:
			mychart_.setlat(-1);
			mychart_.setlng(-1);
			break;
		}
	}
}

const int Sailboat::do_myspeed()
{
	int x{ 0 };
	for (int j = 0; j < power_.size(); j++)
	{
		if(theworld_.wind_.getDirection() == mycompass_.getdirrection())
		{
			x += 2 * power_[j]->getKnots();
		}
		else if (theworld_.wind_.getDirection() == mycompass_.intToDirrection(mycompass_.dirrectionToInt(mycompass_.getdirrection()) - 1))
		{
			x += power_[j]->getKnots();
		}
		else if (theworld_.wind_.getDirection() == mycompass_.intToDirrection(mycompass_.dirrectionToInt(mycompass_.getdirrection()) + 1))
		{
			x += power_[j]->getKnots();
		}
		else
		{
			x += 0 * power_[j]->getKnots();
		}
	}
	return x;
}