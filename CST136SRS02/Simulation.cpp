#include "stdafx.h"
#include "Simulation.h"
#include "Raft.h"
#include "Canoe.h"
#include "Sailboat.h"


Simulation::Simulation()
{
	Raft * hms_titanic = new Raft();
	hms_titanic->setName(string("Ice Breaker"));
	Canoe * uss_arizona = new Canoe();
	uss_arizona->setName(string("Hawaii"));
	Sailboat * rms_lusitania = new Sailboat();
	rms_lusitania->setName(string("torpedo fodder"));

	fleet_.push_back(hms_titanic);
	fleet_.push_back(uss_arizona);
	fleet_.push_back(rms_lusitania);

}


Simulation::~Simulation()
= default;


void Simulation::simulate()
{
	while(true)
	{
		wa_.update_current();
		wi_.update_wind();

		for (auto j = 0; j < fleet_.size(); j++)
		{
			fleet_[j]->updateBoat(wa_, wi_); 

		}

		auto not_finished = 0; 

		for (auto j = 0; j < fleet_.size(); j++)
		{
			if(!fleet_[j]->is_finished())
			{
				not_finished = 1;
			}

		}

		if (not_finished == 0)
		{
			break; 
		}

	}
}

