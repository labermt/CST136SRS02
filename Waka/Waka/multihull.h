#ifndef multihull_h
#define multihull_h

#include <stdio.h>
#include "hull.h"

class MultiHull final : public Hull 
{
private:
    int minTurnRadius = 5;
    int maxWaveHeight = 20;
    int do_minTurnRadius() const noexcept override;
    int do_maxWaveHeight() const noexcept override;
};


#endif
