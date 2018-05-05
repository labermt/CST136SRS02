#include "stdafx.h"
#include "canoe.h"
using namespace std::literals::string_literals; 

std::string Canoe::doGetName()
{
	return "Journey"s;
}

Canoe::Canoe() : Boat(monoHull_, paddle_)
{
}
