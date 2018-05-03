#ifndef paddle_h
#define paddle_h

#include <stdio.h>
#include "propulsion.h"

//set knots somewhere

class Paddle final : public Propulsion 
{
private:
    int knots = 0;
    int do_getKnots() const noexcept override;
};

#endif
