#ifndef raft_h
#define raft_h

#include <stdio.h>
#include <string>
#include "boat.h"

using namespace std::literals::string_literals;

class Raft final : public Boat // A raft is a boat
{
private:
    const std::string name{"Slow Poke"s};
    std::string do_getName() const noexcept override;
};

#endif /* raft_h */
