#ifndef hull_h
#define hull_h

#include <stdio.h>

//There must be a boat for there to be hull

//Abstract class has at least one pure virtual function
class Hull
{
public:
    virtual ~Hull() = default;
    int minTurnRadius() const noexcept;
    int maxWaveHeight() const noexcept;
    
protected:
    //pure virtual function
    virtual int do_minTurnRadius() const noexcept = 0;
    virtual int do_maxWaveHeight() const noexcept = 0;
};

#endif
