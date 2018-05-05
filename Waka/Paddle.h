#ifndef PADDLE_H
#define PADDLE_H

#include "Propulsion.h"

class Paddle final: public Propulsion 
{
public:
	Paddle() = default;

protected:
	Speed doSpeed() noexcept override;
};
#endif