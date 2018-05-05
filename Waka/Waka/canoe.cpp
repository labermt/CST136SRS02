#include <string>
#include "canoe.h"

Canoe::Canoe() : Boat(twoHull, paddleVector_)
{
    
}

std::string Canoe::do_getName() const noexcept
{
    return name;
}
