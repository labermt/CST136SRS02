#include "stdafx.h"
#include "raft.h"

std::string Raft::getName()
{
	return name_;
}

void Raft::nameBoat(std::string given)
{
	name_ = given;
}

void Raft::pushIn(const int longitude, const int latitude)
{
	chart.lat = latitude;
	chart.lon = longitude;
	chart.map[chart.lon][chart.lat] = marker_;
}

char Raft::checkAhead()
{
	const auto current_direction{ water_.getCurrent() };
	if (current_direction == 0)
	{
		return chart.map[chart.lon - 1][chart.lat];
	}
	if (current_direction == 1)
	{
		return chart.map[chart.lon][chart.lat + 1];
	}
	if (current_direction == 2)
	{
		return chart.map[chart.lon + 1][chart.lat];
	}
	if (current_direction == 3)
	{
		return chart.map[chart.lon][chart.lat - 1];
	}
	return 0;
}


void Raft::move()
{
	const auto current_direction{ water_.getCurrent() };
	if (checkAhead() != '1' && checkAhead() != '8') {
		if (current_direction == 0)
		{
			chart.lon -= 1;
			chart.map[chart.lon][chart.lat] = '^';
		}
		else if (current_direction == 1)
		{
			chart.lat += 1;
			chart.map[chart.lon][chart.lat] = '>';
		}
		else if (current_direction == 2)
		{
			chart.lon += 1;
			chart.map[chart.lon][chart.lat] = 'v';
		}
		else if (current_direction == 3)
		{
			chart.lat -= 1;
			chart.map[chart.lon][chart.lat] = '<';
		}
	}
	water_.counter += 1;
}
