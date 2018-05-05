#pragma once
#include <string>

class Boat
{
private: 
	virtual std::string getName() = 0;

public:
	Boat();
	std::string do_getName();
	
	virtual ~Boat();
};

