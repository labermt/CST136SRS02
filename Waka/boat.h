#pragma once
#include <string>

class Boat
{
	virtual void do_move()=0;
	virtual void turn()=0;
	virtual std::string get_name() = 0;

public:
	void move();
	virtual ~Boat() = default;
};
