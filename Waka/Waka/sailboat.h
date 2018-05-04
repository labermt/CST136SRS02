#ifndef sailboat_h
#define sailboat_h

#include <stdio.h>
#include "boat.h"
#include "multihull.h"

using namespace std::literals::string_literals;

class SailBoat final : public Boat
{
public:
    SailBoat();
    
private:
    const std::string name{"Sea Breeze"s};
    MultiHull twoHull;
    std::string do_getName() const noexcept override;
    int do_getMinTurnRadius() const noexcept override;
    int do_getMaxWaveHeight() const noexcept override;
};

#endif /* sailboat_h */
