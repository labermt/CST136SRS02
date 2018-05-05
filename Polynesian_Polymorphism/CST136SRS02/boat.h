#pragma once
#include "stdafx.h"
#include <string>
#include "chart.h"
#include "water.h"


class Boat
{
public:
	Chart chart;
	
protected:
	std::string name_{};

private:
	const char marker_{ 'b' };
	Water water_;

public:
	virtual ~Boat() = default;
	virtual std::string getName();
	virtual void nameBoat(std::string);
	virtual void pushIn(int, int);
	virtual void move();
	virtual char checkAhead();
};


