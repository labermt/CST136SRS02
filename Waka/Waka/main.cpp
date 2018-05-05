#include <iostream>
#include <string>

#include "raft.h"
#include "sailboat.h"
#include "canoe.h"

//randomly generates wind speed
double windSpeed();
//wind direction is measured in degrees from north -- if 
int windDirection();

//determine how the sail is affected by the wind speed

//Explicit demo - uncomment foo function call
class A
{
private:
    int i_;
    
public:
    explicit A(int i) : i_{i}{} //If explicit is not declared, it may change the type to type A
};

void foo(A a)
{
    
}

void capsize(int waveHeight, int maxWaveHeight);

int main() {

    //foo(42); //To demonstate explicit

    Raft raft;
    Boat& raftBoat{raft};
    auto raftMaxWaveHeight{raftBoat.getMaxWaveHeight()};
    auto raftTurnRadius{raftBoat.getMinTurnRadius()};
    auto raftWaveHeight{raftBoat.getWaveHeight()};
    
    Canoe canoe;
    Boat& canoeBoat{canoe};
    auto canoeWaveHeight{canoeBoat.getMaxWaveHeight()};
    auto canoeTurnRadius{canoeBoat.getMinTurnRadius()};
    auto canoeKnots{canoeBoat.getKnots()};
    
    SailBoat sailboat;
    Boat& sailBoat{sailboat};
    auto sailboatWaveHeight{sailBoat.getMaxWaveHeight()};
    auto sailboatTurnRadius{sailBoat.getMinTurnRadius()};
    auto sailboatKnots{sailBoat.getKnots()};
    

    return 0;
}






















