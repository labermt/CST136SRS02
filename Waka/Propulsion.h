#ifndef PROPULSION_H
#define PROPULSION_H

#include "Speed.h"

class Propulsion
{
protected:
	virtual Speed doSpeed() noexcept = 0;

public:
	Speed getSpeed() noexcept;

public:
	virtual ~Propulsion() = default;
 
};
#endif