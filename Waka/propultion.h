#pragma once

class Propultion
{
protected:
	enum class movement { slow =1 , fast =2 };
	virtual int do_get_knots() = 0;
	
public:
	Propultion();
	virtual ~Propultion();
	int get_knots();
	
};
