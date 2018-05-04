#ifndef boat_h
#define boat_h

#include <string>
#include <vector>
#include <functional>
#include "environment.h"
#include "wind.h"
#include "hull.h"
#include "propulsion.h"

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
    int getKnots() const noexcept;
    int foo() const noexcept{return 0;}
    
protected:
    //explicit Boat(Hull& hull);
    //Hull cannot be treated like a boat with explicit
    explicit Boat(Hull& hull, std::vector<Propulsion&> propulsion);
    //pure virtual function
    virtual std::string do_getName() const noexcept = 0;
    virtual int do_getMinTurnRadius() const noexcept = 0;
    virtual int do_getMaxWaveHeight() const noexcept = 0;
    virtual int do_getKnots() const noexcept = 0;
    
private:
    const Hull& hull_;
    const std::vector<std::reference_wrapper<Propulsion>> propulsion_;
};

#endif /* boat_h */
