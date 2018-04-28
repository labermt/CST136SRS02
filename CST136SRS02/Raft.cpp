#include "stdafx.h"
#include "Raft.h"


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
		float my_speed = cos((my_direction - wa.get_direction()) * 3.1416 / 180) * wa.get_speed();

		if (my_speed > 0)
		{
			auto progress = my_speed * 0.5f;
			auto total = progress + chart_.get_current_distance(); 

			if (total > chart_.get_leg_distance())
			{
				chart_.increment_leg(); 
				chart_.set_current_distance(chart_.get_leg_direction() - total);
			}
		}

	}

}