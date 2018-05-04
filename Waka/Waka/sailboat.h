#ifndef sailboat_h
#define sailboat_h

#include <stdio.h>
#include <vector>
#include <functional>
#include "boat.h"
#include "multihull.h"
#include "sail.h"

using namespace std::literals::string_literals;

class SailBoat final : public Boat
{
public:
    SailBoat();
    
private:
    const std::string name{"Sea Breeze"s};
    MultiHull twoHull;
    Sail sail1;
    Sail sail2;
    Sail sail3;
    std::vector<std::reference_wrapper<Propulsion>> sailVector_{sail1, sail2, sail3};
    std::string do_getName() const noexcept override;
    int do_getMinTurnRadius() const noexcept override;
    int do_getMaxWaveHeight() const noexcept override;
};

#endif /* sailboat_h */
