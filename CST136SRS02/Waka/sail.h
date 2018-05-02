#pragma once

#include "propulsion.h"
#include "cardinal.h"

class Sail : public Propulsion
{


public:

	Sail();
	~Sail();

	void setDirection(Cardinal direction) noexcept;

	Cardinal getDirection() const;

	//do get speed next

private:

	Cardinal direction;

};

