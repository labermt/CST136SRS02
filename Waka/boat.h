#pragma once
#include <string>
#include "hull.h"
#include <vector>
#include "propulsion.h"
#include "chart.h"

class Boat
{
public:
	Boat(Hull const &hull);

protected:
	virtual ~Boat() = default; 

protected:
	virtual void doGetName() noexcept = 0;

public:
	void getName() noexcept;
	void moveBoat();
	void turnBoat();

public:
	std::string name_;
	Hull const &hull_;
	Chart &chart_;
	std::vector<Propulsion> propulsion_;


};

