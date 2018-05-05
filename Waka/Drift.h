#ifndef DRIFT_H
#define DRIFT_H

#include "Propulsion.h"

class Drift final: public Propulsion
{
public:
	Drift() = default;

protected:
	Speed doSpeed() noexcept override;
	
};
#endif

