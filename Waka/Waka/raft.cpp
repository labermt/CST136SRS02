#include <string>
#include "raft.h"


Raft::Raft() : Boat(oneHull)
{
    
}

std::string Raft::do_getName() const noexcept
{
    return name;
}

int Raft::do_getMinTurnRadius() const noexcept
{
    return Boat::do_getMinTurnRadius();
}

int Raft::do_getMaxWaveHeight() const noexcept
{
    return Boat::do_getMaxWaveHeight();
}
