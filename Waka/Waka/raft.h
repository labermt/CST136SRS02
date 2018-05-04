#ifndef raft_h
#define raft_h

#include <stdio.h>
#include <string>
#include "boat.h"
#include "monohull.h"

using namespace std::literals::string_literals;

class Raft final : public Boat // A raft is a boat
{
public:
    Raft();
private:
    const std::string name{"Slow Poke"s};
    std::string do_getName() const noexcept override;
    int do_getMinTurnRadius() const noexcept override;
    int do_getMaxWaveHeight() const noexcept override;
    MonoHull oneHull;
};

#endif /* raft_h */
