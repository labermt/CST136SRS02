#ifndef paddle_h
#define paddle_h

#include <stdio.h>
#include "propulsion.h"

//set knots somewhere

class Paddle final : public Propulsion 
{
private:
    double knots = 0;
    double do_getKnots() const noexcept override;
};

#endif
