#ifndef sail_h
#define sail_h

#include <stdio.h>
#include "propulsion.h"

//set knots somewhere
//Sail knots will depend on the wind 

class Sail final : public Propulsion 
{
private:
    double knots = 50;
    double do_getKnots() const noexcept override;
};

#endif
