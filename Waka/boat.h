#pragma once
#include <string>
#include "propultion.h"
#include "chart.h"
#include "hull.h"

class Boat
// make chart and hull friends?
// how do I tie chart, a hull type, and propultion to each individual boat?
{
	//TODO: determine, should / can data members go here? instead of the derived classes.

protected:
	virtual void do_move()=0;
	virtual void do_turn()=0;
	virtual std::string get_name() = 0;

public:
	enum class hull { Mono_hull, Multi_Hull };
	void start_voyage();
	Boat();
	void move();
	void turn();
	virtual ~Boat() = default;
};
