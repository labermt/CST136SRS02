#include "stdafx.h"
#include <vector>
#include "chart.h"
#include "propulsion.h"
#include "environment.h"
#include "boat.h"

Boat::Boat(const Hull& hull, const std::vector<Propulsion*>& propulsion) : hull_{ hull }, chart_{ new Chart }, propulsion_{ propulsion }
{
	Environment::wind;
}

Boat::~Boat()
{
	delete chart_; 
}

