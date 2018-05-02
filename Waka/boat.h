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
	std::string name_;

protected:
	virtual void do_move()=0;
	virtual void turn()=0;
	virtual std::string get_name() = 0;

public:
	enum class hull { Mono_hull, Multi_Hull };
	Boat();
	void move();
	virtual ~Boat() = default;
};
