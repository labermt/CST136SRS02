#include "stdafx.h"
#include "Simulation.h"
#include "Raft.h"
#include "Canoe.h"
#include "Sailboat.h"


Simulation::Simulation()
{
	Raft hms_titanic; 
	Canoe uss_arizona;
	Sailboat rms_lusitania;

	fleet.push_back(hms_titanic);
	fleet.push_back(uss_arizona);
	fleet.push_back(rms_lusitania);

}


Simulation::~Simulation()
= default;


void Simulation::simulate()
{
	while(true)
	{
		wa.updateCurrent();
		wi.updateWind();

		for (auto j = 0; j < fleet.size(); j++)
		{
			fleet[j].updateBoat(wa, wi); 

		}

		auto notFinished = 0; 

		for (auto j = 0; j < fleet.size(); j++)
		{
			if(!fleet[j].is_finished())
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

