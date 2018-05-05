#ifndef canoe_h
#define canoe_h

#include <string>
#include <vector>
#include <functional>
#include "boat.h"
#include "multihull.h"
#include "paddle.h"

using namespace std::literals::string_literals;

class Canoe final : public Boat // A canoe is a boat
{
public:
    Canoe();
    
private:
    const std::string name{"I'm A Boat"s};
    MultiHull twoHull;
    Paddle paddle1;
    Paddle paddle2;
    std::vector<std::reference_wrapper<Propulsion>> paddleVector_{paddle1, paddle2};
    std::string do_getName() const noexcept override;
};

#endif /* canoe_h */
