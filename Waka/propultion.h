#pragma once

class Propultion
{
public:
	Propultion();
	//TODO: does this need to be a virtual function?
	virtual int get_speed() = 0;
	~Propultion();
};
