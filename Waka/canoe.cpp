#include "stdafx.h"
#include "canoe.h"


Canoe::Canoe(const std::string name) : Boat(name)
{ }

std::string Canoe::do_getName()
{
	return name_;
}

void Canoe::turnRight()
{

}

void Canoe::turnLeft()
{

}