// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "boat.h"
#include "raft.h"
#include "anchor.h"
#include "sailboat.h"
#include "canoe.h"


int main()
{
	Raft theRaft; 
	Sailboat theSailBoat; 
	// Canoe theCanoe; 
	Boat & seaWitch{ theRaft };
	auto myname{ seaWitch.getName() }; 
	// Boat & aquaholic{ theSailBoat }; 
	// Boat & journey{ theCanoe }; 
    return 0;
}

