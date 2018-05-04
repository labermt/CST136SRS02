#include <string>
#include "sailboat.h"

SailBoat::SailBoat() : Boat{twoHull, sailVector_}
{
    
}

std::string SailBoat::do_getName() const noexcept
{
    return name;
}

int SailBoat::do_getMinTurnRadius() const noexcept
{
    return Boat::do_getMinTurnRadius();
}

int SailBoat::do_getMaxWaveHeight() const noexcept
{
    return Boat::do_getMaxWaveHeight();
}
