#ifndef CANOE_H
#define CANOE_H

#include "Boat.h"

class Canoe final: public Boat
{
public:
	Canoe(std::string const name, Propulsion & prop, Hull & hull);

protected:
	std::string doGetName() noexcept override;

public:
	void nav(Navigation& nav);
	
};
#endif
