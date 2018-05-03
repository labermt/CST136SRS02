#ifndef canoe_h
#define canoe_h

#include <stdio.h>
#include "boat.h"

using namespace std::literals::string_literals;

class Canoe final : public Boat // A canoe is a boat
{
private:
    const std::string name{"I'm A Boat"s};
    std::string do_getName() const noexcept override;
};

#endif /* canoe_h */
