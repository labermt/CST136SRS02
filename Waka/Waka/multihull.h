#ifndef multihull_h
#define multihull_h

#include <stdio.h>
#include "hull.h"

class MultiHull final : public Hull 
{
private:
    int do_minTurnRadius() const noexcept override;
    int do_maxWaveHeight() const noexcept override;
};


#endif
