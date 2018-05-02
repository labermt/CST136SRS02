#include "stdafx.h"
#include "Raft.h"
#include <iostream>

using namespace std;


Raft::Raft()
	: Boat()
{
}


Raft::~Raft()
{
}

void Raft::updateBoat(Water wa, Wind wi)
{
	if(chart_.get_leg() <= chart_.journey_size())
	{
		auto my_direction = chart_.get_leg_direction();
		auto my_speed = float(cos((my_direction - wa.get_direction()) * 3.1416 / 180) * wa.get_speed());

		if (my_speed > 0)
		{
			auto progress = my_speed * 0.5f;
			auto total = progress + chart_.get_current_distance(); 
			chart_.set_current_distance(total);

			if (total > chart_.get_leg_distance())
			{
				auto remainder = total - chart_.get_leg_distance(); 
				chart_.set_current_distance(remainder);
				chart_.increment_leg(); 

			}

			cout << getName() << " on trip leg " << chart_.get_leg() << " " << chart_.get_current_distance() << endl; 

			if (chart_.get_leg() >= chart_.journey_size())
			{
				cout << getName() << " has completed the journey." << endl; 
			}
		}
		else
		{
			cout << getName() << " current in wrong direction; Boat is anchored." << endl; 
		}

	}

}