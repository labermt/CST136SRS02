#pragma once

class Boat
{
private:
	virtual void do_get_name() = 0;

public:
	Boat() = default;

public:
	void get_name()
	{
		do_get_name();
	}
};

