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

int main() {
    //create a sailboat
//    SailBoat newBoat;
 //   std::cout << newBoat.getName() << std::endl;
   // std::cout << newBoat.getWaveHeight() << std::endl;
    
    Raft newRaft;
    Boat& newBoat{newRaft};
    auto waveHeight {newBoat.getMaxWaveHeight()};
    
    Canoe canoe;
    Boat& boat{canoe};
    auto height{boat.getMaxWaveHeight()};
    
    SailBoat sailboat;
    Boat& aBoat{sailboat};
    auto wHeight{boat.getMaxWaveHeight()};
    
    return 0;
}
