#include "stdafx.h"
#include "boat.h"
#include "canoe.h"
#include "raft.h"
#include "sailboat.h"
#include <vector>
#include "multi_hull.h"
#include "mono_hull.h"
#include "paddle.h"
#include "sail.h"


int main()
{
	std::vector<Boat> boat_list;
	Multi_hull const canoe_hull;
	Chart canoe_chart;
	std::vector<Propulsion*> canoe_prop;
	Paddle c1;
	Paddle c2;
	canoe_prop.emplace_back(c1);
	canoe_prop.emplace_back(c2);
	Canoe canoe("Jennnay", canoe_hull, canoe_prop, canoe_chart);
	boat_list.emplace_back(canoe);

	Mono_hull raft_hull;
	Paddle r1;
	std::vector<Propulsion*> raft_prop;
	raft_prop.emplace_back(r1);
	Chart raft_chart;
	Raft raft("Sea Hag", raft_hull, raft_prop, raft_chart );
	boat_list.emplace_back(raft);

	Mono_hull sail_hull;
	Chart sail_chart;
	std::vector<Propulsion*> sail_prop;
	Sail s1;
	sail_prop.emplace_back(s1);
	Sailboat sailboat("Boaty McBoat Face", sail_hull, sail_prop, sail_chart );
	boat_list.emplace_back(sailboat);

	for(auto& boat : boat_list)
	{
		auto name = boat.get_name();
		auto turn_radius = boat.get_turn_radius();
		auto max_wave_height = boat.get_max_wave_height();
		auto knots = boat.get_knots();
		boat.start_voyage();
	}


    return 0;
}
