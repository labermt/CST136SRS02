#include <string>
#include "canoe.h"

Canoe::Canoe() : Boat(twoHull, paddleVector_)
{
    
}

std::string Canoe::do_getName() const noexcept
{
    return name;
}

int Canoe::do_getMinTurnRadius() const noexcept
{
    return Boat::do_getMinTurnRadius();
}

int Canoe::do_getMaxWaveHeight() const noexcept
{
    return Boat::do_getMaxWaveHeight();
}
