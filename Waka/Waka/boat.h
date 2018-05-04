#ifndef boat_h
#define boat_h

#include <stdio.h>
#include <string>
#include "environment.h"
#include "wind.h"
#include "hull.h"

//Abstract class has at least one pure virtual function
class Boat
{
public:
    virtual ~Boat() = default;
    std::string getName() const noexcept;
    int getHull() const noexcept;
    //Get the height of the current waves
    int getWaveHeight();
    //Determine if the height of the current wave is larger than the maximumWaveHeight -- capsize or not?
    int getWindSpeed();
    int getMinTurnRadius() const noexcept;
    int getMaxWaveHeight() const noexcept;
    
protected:
    //Hull cannot be treated like a boat with explicit
    explicit Boat(Hull& hull);
    //pure virtual function
    virtual std::string do_getName() const noexcept = 0;
    virtual int do_getMinTurnRadius() const noexcept = 0;
    virtual int do_getMaxWaveHeight() const noexcept = 0;
    
private:
    Hull& hull_;
};

#endif /* boat_h */
