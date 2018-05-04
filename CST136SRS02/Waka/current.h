#pragma once

#include "cardinal.h"
#include "string"

class Current
{
public:

	Current();
	~Current() = default;

	Cardinal getDirection() const noexcept;
	std::string getDirectionString() const noexcept;

private:

	Cardinal directionOfCurrent;
};

