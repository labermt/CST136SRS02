#ifndef propulsion_h
#define propulsion_h

#include <stdio.h>

//Without a boat, there is no propulsion

//Abstract class has at least one pure virtual function
class Propulsion
{
public:
    virtual ~Propulsion() = default;
    int getKnots() const noexcept;
    
protected:
    //pure virtual function
    virtual int do_getKnots() const noexcept = 0;
};

#endif
