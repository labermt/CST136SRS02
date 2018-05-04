#include "stdafx.h"
#include <vector>
#include "canoe.h"

Canoe::Canoe(const std::string name, Hull * hull) : name_(name)
{ }

std::string Canoe::do_getName()
{
	return name_;
}

void Canoe::do_turnRight()
{

}

void Canoe::do_turnLeft()
{
	
}