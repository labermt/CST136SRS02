#pragma once
#include <string>

class Boat
{
	virtual void move()=0;
	virtual void turn()=0;
	virtual std::string get_name()=0;

public:
	virtual ~Boat() = default;
};

