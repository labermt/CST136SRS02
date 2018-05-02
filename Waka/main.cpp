#include "stdafx.h"
#include "boat.h"
#include "canoe.h"
#include "raft.h"
#include "sailboat.h"
#include <vector>


int main()
{
	std::vector<Boat> boat_list;
	Canoe canoe("Miranda", Boat::hull::Mono_hull);
	boat_list.emplace_back(canoe);
	Raft raft("Sea Hag", Boat::hull::Mono_hull);
	boat_list.emplace_back(raft);
	Sailboat sailboat("Tamberine", Boat::hull::Multi_Hull);
	boat_list.emplace_back(sailboat);

	// either do this loop, or possibly just include run game in the constructor?
	for(auto& boat : boat_list)
	{
		//navigate course
	}


    return 0;
}
