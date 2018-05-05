// CST136SRS02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "chart.h"
#include "boat.h"
#include "raft.h"

int main()
{

	Raft dingy;
	dingy.chart.import_chart("new_zealand.txt");
	dingy.nameBoat("SeaHag");
	dingy.pushIn(40, 20);
	for (auto i = 0; i < 200; i++)
	{
		dingy.move();
	}
	dingy.chart.display_chart(dingy.chart.map);
	dingy.getName();



	return 0;
}

