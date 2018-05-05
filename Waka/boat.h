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
	std::string name_{};
	environment theworld_;
	Chart mychart_{ 4, 3 };
	compass mycompass_{};
	Hull* myhull_{};
	std::vector<Propulsion*> power_;

	virtual const std::string do_getName();
	virtual void do_turnRight();
	virtual void do_turnLeft();
	virtual void do_move();
	virtual void do_addPropulsion(Propulsion* d0);
	virtual const int do_myspeed();

public:
	Boat(std::string name, Hull* hull);

	const std::string getName();

	void turnRight();
	void turnLeft();
	void move();

	void addPropulsion(Propulsion* d0);
	const int myspeed();

	const environment::properties whatAmIOn();
};
