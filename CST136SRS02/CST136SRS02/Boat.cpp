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

Boat::Boat(std::string boatName, Hull * hull_, Propulsion * propulsion_)
	:name{boatName}, chart { Chart(0,0,90) }, hull {hull_}, propulsion { propulsion_ }
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

Chart Boat::getChart() const
{
	return chart;
}

Hull * Boat::getHull() const
{
	return hull;
}

Propulsion * Boat::getPropulsion() const
{
	return propulsion;
}
