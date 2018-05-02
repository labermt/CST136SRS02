#pragma once

class Propultion
{
protected:
	enum class movement { slow, fast };
	virtual int do_get_knots() = 0;
	virtual ~Propultion();
public:
	Propultion();
	int get_knots();
	
};
