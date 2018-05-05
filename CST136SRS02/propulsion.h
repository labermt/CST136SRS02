#pragma once
#include <string>

class Propulsion
{
private:
	virtual std::string getKnots() = 0;
public:
	Propulsion();
	std::string do_getKnots();
	virtual ~Propulsion();
};

