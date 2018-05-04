#pragma once
#include <string>
#include "chart.h"
#include "environment.h"

class Boat
{
protected:
	std::string name_{};
	environment theworld_;
	Chart mychart_{ 4, 3, Chart::orientation::north };


	virtual std::string do_getName();

public:
	Boat(std::string name);

	std::string getName();
};
