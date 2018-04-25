#include "stdafx.h"
#include "Chart.h"


Chart::Chart()
{
	directions.push_back(120);
	distances.push_back(325);
	directions.push_back(220);
	distances.push_back(920);
	directions.push_back(320);
	distances.push_back(200);
	directions.push_back(10);
	distances.push_back(950);
	currentDistance = 0; 
	legNumber = 1; 
}


Chart::~Chart()
{
}


int Chart::isFinished()
{
	if (legNumber > distances.size())
	{
		return 1;
	}
	else
		return 0;
}