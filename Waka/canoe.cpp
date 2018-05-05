#include "stdafx.h"
#include <vector>
#include "canoe.h"

Canoe::Canoe(const std::string name, Hull * hull) : Boat(name, hull)
{ }

const std::string Canoe::do_getName()
{
	return name_;
}

void Canoe::do_addPropulsion(Propulsion* d0)
{
	power_.push_back(d0);
}

void Canoe::do_turnRight()
{
	mycompass_.setdirrection(mycompass_.intToDirrection(mycompass_.dirrectionToInt(mycompass_.getdirrection()) + myhull_->minTurnRadius()));
}

void Canoe::do_turnLeft()
{
	mycompass_.setdirrection(mycompass_.intToDirrection(mycompass_.dirrectionToInt(mycompass_.getdirrection()) - myhull_->minTurnRadius()));
}

void Canoe::do_move()
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

const int Canoe::do_myspeed()
{
	int x{ 0 };
	for (int j = 0; j < power_.size(); j++)
	{
		x += power_[j]->getKnots();
	}
	return x;
}