#ifndef canoe_h
#define canoe_h

#include <stdio.h>
#include "boat.h"
#include "multihull.h"

using namespace std::literals::string_literals;

class Canoe final : public Boat // A canoe is a boat
{
public:
    Canoe();
    
private:
    const std::string name{"I'm A Boat"s};
    MultiHull twoHull;
    std::string do_getName() const noexcept override;
    int do_getMinTurnRadius() const noexcept override;
    int do_getMaxWaveHeight() const noexcept override;
};

#endif /* canoe_h */
