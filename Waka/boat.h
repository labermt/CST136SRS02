#pragma once
#include <string>
#include <vector>
#include "environment.h"
#include "chart.h"
#include "compass.h"
#include "monohull.h"
#include "propulsion.h"


class Boat
{
protected:
	environment theworld_;
	Chart mychart_{ 4, 3 };
	
	virtual std::string do_getName();
	virtual void do_turnRight();
	virtual void do_turnLeft();
	virtual void do_move();
	virtual int do_myspeed();
	virtual environment::properties do_whatAmIOn();

public:
	std::string getName();

	void turnRight();
	void turnLeft();
	void move();

	int myspeed();

	environment::properties whatAmIOn();
};
