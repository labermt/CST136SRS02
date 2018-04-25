#include "stdafx.h"
#include "Simulation.h"
#include "Raft.h"
#include "Canoe.h"
#include "Sailboat.h"


Simulation::Simulation()
{
	Raft b1; 
	Canoe b2;
	Sailboat b3; 

	fleet.push_back(b1);
	fleet.push_back(b2);
	fleet.push_back(b3);

}


Simulation::~Simulation()
{
}


void Simulation::simulate()
{
	while(1)
	{
		wa.updateCurrent();
		wi.updateWind();

		for (int j = 0; j < fleet.size(); j++)
		{
			fleet[j].updateBoat(wa, wi); 

		}

		int notFinished = 0; 

		for (int j = 0; j < fleet.size(); j++)
		{
			if(!fleet[j].isFinished())
			{
				notFinished = 1;
			}

		}

		if (notFinished == 0)
		{
			break; 
		}

	}


}

