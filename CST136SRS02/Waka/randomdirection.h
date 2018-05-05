#pragma once

#include "cardinal.h"

class Randomdirection
{


public:
	Randomdirection() = default;
	~Randomdirection() = default;

	Cardinal generate() noexcept;
};

