#include "stdafx.h"
#include "Raft.h"
#include "Wind.h"
#include "Water.h"
#include <vector>

int main()
{
	// vector of 3 different boats
	//std::vector<Boat> boats(3); 
	//boats.push_back(Raft("Bob"));

	//Wind and water apply to all boats are change slightly ever time through
	static Wind wind = Wind();
	static Water water = Water();
	



	//at the end of the loop
	wind.update();
	water.update();

	return 0;
}

