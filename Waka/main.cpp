#include "stdafx.h"
#include "boat.h"
#include "canoe.h"
#include "raft.h"
#include "sailboat.h"
#include <vector>
#include "multi_hull.h"
#include "mono_hull.h"
#include "paddle.h"


int main()
{
	std::vector<Boat> boat_list;
	Multi_hull canoe_hull;
	Chart canoe_chart;
	//std::vector<Propulsion*> canoe_prop;

	//Canoe canoe("Jennnay", canoe_hull, canoe_prop, canoe_chart);
	/*boat_list.emplace_back(canoe);
	Mono_hull raft_hull;
	Raft raft("Sea Hag", raft_hull );
	boat_list.emplace_back(raft);
	Mono_hull sail_hull;
	Sailboat sailboat("Boaty McBoat Face",sail_hull );
	boat_list.emplace_back(sailboat);*/

	for(auto& boat : boat_list)
	{
		auto name = boat.get_name();
		boat.start_voyage();
	}


    return 0;
}
