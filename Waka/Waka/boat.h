#ifndef boat_h
#define boat_h

#include <stdio.h>
#include <string>

//Abstract class has at least one pure virtual function
class Boat
{
public:
    virtual ~Boat() = default;
    std::string getName() const noexcept;
    
protected:
    //pure virtual function
    virtual std::string do_getName() const noexcept = 0;
};

#endif /* boat_h */
