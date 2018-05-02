#pragma once
#include <string>
#include "hull.h"
#include "chart.h"
#include "propultion.h"

class Boat
{
	Hull hull_;
	Chart chart_;
	Propultion prop_;


	virtual void do_move()=0;
	virtual void turn()=0;
	virtual std::string get_name() = 0;

public:
	void move();
	virtual ~Boat() = default;
};
