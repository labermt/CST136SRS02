#pragma once
#include <string>
#include "chart.h"
#include <vector>
#include "gps.h"

class Boat
{
public:
	std::string getName()
	{
		return doGetName();
	}

private:
	virtual std::string doGetName() noexcept = 0; 
	bool floating_{ true }; 
	Chart * const chart_; 

protected:
	virtual ~Boat();

public:
	void moveBoat(Direction direction);
	void setSail(); 

public:
	Boat(); 
	GPS position_{GPS(10, 4)};
};

