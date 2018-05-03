#ifndef sailboat_h
#define sailboat_h

#include <stdio.h>
#include "boat.h"

using namespace std::literals::string_literals;

class SailBoat final : public Boat
{
private:
    const std::string name{"Sea Breeze"s};
    std::string do_getName() const noexcept override;
};

#endif /* sailboat_h */
