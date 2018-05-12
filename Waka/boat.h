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

	bool captsized_{ false };

	virtual std::string do_getName() const;
	virtual void do_turnRight();
	virtual void do_turnLeft();
	virtual void do_move();
	virtual void do_addPropulsion(Propulsion* d0);
	virtual int do_myspeed() const;

public:
	Boat(std::string name, Hull* hull);

	std::string getName() const;

	void turnRight();
	void turnLeft();
	void move();

	void addPropulsion(Propulsion* d0);
	int myspeed() const;

	environment::properties whatAmIOn() const;
	bool getcaptsized_() const;
};
