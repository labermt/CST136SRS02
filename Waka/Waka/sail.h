#ifndef sail_h
#define sail_h

#include <stdio.h>
#include "propulsion.h"

//set knots somewhere

class Sail final : public Propulsion 
{
private:
    int knots = 0;
    int do_getKnots() const noexcept override;
};

#endif
