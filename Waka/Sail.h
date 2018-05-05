#ifndef SAIL_H
#define SAIL_H

#include "Propulsion.h"

class Sail final: public Propulsion
{
public:
	Sail() = default;

protected:
	Speed doSpeed() noexcept override;
};
#endif