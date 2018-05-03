#include <string>
#include "raft.h"

std::string Raft::do_getName() const noexcept
{
    return name;
}
