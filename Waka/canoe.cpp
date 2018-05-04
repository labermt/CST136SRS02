#include "stdafx.h"
#include "canoe.h"

Canoe::Canoe(const std::string name) : name_(name)
{ }

std::string Canoe::do_getName()
{
	return name_;
}