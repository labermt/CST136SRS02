#include "boat.h"

Boat::Boat(Hull& hull) : hull_{hull}
{
    
}

Boat::Boat(Hull& hull, std::vector<std::reference_wrapper<Propulsion>>& propulsion) : hull_{hull}, propulsion_{propulsion}
{
    
}

std::string Boat::getName() const noexcept
{
    return do_getName();
}

int Boat::getWaveHeight()
{
    return Environment::water.getWaveHeight();
}

int Boat::getWindSpeed()
{
    return Environment::wind.getWindSpeed();
}

int Boat::getMinTurnRadius() const noexcept
{
    return hull_.minTurnRadius();
}

int Boat::getMaxWaveHeight() const noexcept
{
    return hull_.maxWaveHeight();
}

int Boat::getKnots() const noexcept
{
    return 0; // TODO
}









