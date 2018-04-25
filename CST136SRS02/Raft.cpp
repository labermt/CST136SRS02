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
	if(c.getLeg() <= c.journeySize())
	{
		int myDirection = c.getLegDirection();
		float mySpeed = cos((myDirection - wa.getDirection())*3.1416 / 180)*wa.getSpeed();

		if (mySpeed > 0)
		{
			float progress = mySpeed * 0.5f;
			float total = progress + c.getCurrentDistance(); 

			if (total > c.getLegDistance())
			{
				c.incrementLeg(); 
				c.setCurrentDistance(c.getLegDirection() - total);
			}
		}

	}

}