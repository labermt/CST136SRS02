// CST136SRS02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "chart.h"
#include "boat.h"
#include <iostream>
#include "raft.h"

int main()
{

	Boat dingy;
	dingy.chart.import_chart("new_zealand.txt");
	dingy.chart.display_chart(dingy.chart.map);
	dingy.pushIn(40, 20);
	for (int i = 0; i < 25; i++)
	{
		dingy.move();
	}
	dingy.chart.display_chart(dingy.chart.map);


	return 0;
}

