#ifndef SAILBOAT_H
#define SAILBOAT_H

#include "Boat.h"

class Sailboat: public Boat
{
public:
	Sailboat(std::string const name, Propulsion & prop, Hull & hull);

protected:
	std::string doGetName() noexcept override;

public:
	void nav(Navigation& nav);
};
#endif