#include <string>
#include "sailboat.h"

SailBoat::SailBoat() : Boat{twoHull, sailVector_}
{
    
}

std::string SailBoat::do_getName() const noexcept
{
    return name;
}

