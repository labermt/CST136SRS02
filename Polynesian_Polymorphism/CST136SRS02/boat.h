#pragma once
#include "stdafx.h"
#include <string>
#include "chart.h"


class Boat
{

public:
	Chart chart;
	
protected:
	std::string name_{};
	const char marker_{ 'b' };


public:
	virtual ~Boat() = default;
	virtual std::string getName();
	virtual void nameBoat(std::string);
	void pushIn(int, int);
	void move(const int);
};


