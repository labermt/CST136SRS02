// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Sailboat.h"
#include "MonoHull.h"

int main()
{
	MonoHull makeItMono();

	Sailboat mySailboat("Kaelyn");
	Boat* myNewSailboat(&mySailboat);

	std::string sailboatName = myNewSailboat->getName();
	
	//Raft myRaft("KaelynRaft");
	//Canoe myCanoe("Kaelyn");
		
    return 0;
}

