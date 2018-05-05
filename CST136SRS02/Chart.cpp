#include "stdafx.h"
#include "Chart.h"


Chart::Chart()
{
	directions_.push_back(120);
	distances_.push_back(325);
	directions_.push_back(220);
	distances_.push_back(920);
	directions_.push_back(320);
	distances_.push_back(200);
	directions_.push_back(10);
	distances_.push_back(950);
	current_distance_ = 0; 
	leg_number_ = 1; 
}


Chart::~Chart()
{
}


int Chart::is_finished()
{
	if (leg_number_ > distances_.size())
	{
		return 1;
	}
	else
		return 0;
}