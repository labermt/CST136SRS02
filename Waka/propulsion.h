#pragma once
#include "paddle.h"
#include "sail.h"

class propulsion
{
private:
	paddle paddle_{};
	sail sail_{};

public:
	const int getSpeed();
};