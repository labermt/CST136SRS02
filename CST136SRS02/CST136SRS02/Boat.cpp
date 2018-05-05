#include "stdafx.h"
#include "Boat.h"


std::string Boat::do_get_name() const
{
	return name;
}

std::string Boat::getName() const noexcept
{
	return do_get_name();
}

Boat::Boat(std::string boatName, Hull * hull_, Propulsion * propulsion_)
	:name{boatName}, chart { Chart(0,0,90) }, hull {hull_}, propulsion { propulsion_ }
{
}

bool Boat::isCapsized() const noexcept
{
	return capsized;
}

bool Boat::isJourneyComplete() const noexcept
{
	return journeyComplete;
}

void Boat::capsizeBoat() noexcept
{
	capsized = true;
}

void Boat::completeJourney() noexcept
{
	journeyComplete = true;
}

Chart& Boat::getChart() noexcept
{
	return chart;
}

Hull * Boat::getHull() const noexcept
{
	return hull;
}

Propulsion * Boat::getPropulsion() const noexcept
{
	return propulsion;
}
