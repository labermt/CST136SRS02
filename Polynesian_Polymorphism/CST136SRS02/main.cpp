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
	dingy.nameBoat("seahag");
	std:: cout << dingy.getName();

	return 0;
}

