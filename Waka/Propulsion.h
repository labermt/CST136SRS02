#pragma once

class Propulsion
{
protected:
	enum class movement { paddle = 1 , sail = 2 };
	virtual int do_get_knots() = 0;
	
public:
	Propulsion();
	virtual ~Propulsion();
	int get_knots();
	
};
