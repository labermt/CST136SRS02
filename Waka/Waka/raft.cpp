#include <string>
#include "raft.h"


Raft::Raft() : Boat(oneHull)
{
    
}

std::string Raft::do_getName() const noexcept
{
    return name;
}

