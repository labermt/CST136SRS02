#ifndef monohull_h
#define monohull_h

#include <stdio.h>
#include "hull.h"

class MonoHull final : public Hull 
{
private:
    int minTurnRadius = 10;
    int maxWaveHeight = 5;
    int do_minTurnRadius() const noexcept override;
    int do_maxWaveHeight() const noexcept override;
};


#endif
