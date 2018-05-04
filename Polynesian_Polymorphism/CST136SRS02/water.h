#pragma once
#include "stdafx.h"

struct Water
{
protected:
	int current_{};

public:
	enum direction {north, east, south, west};
	int counter{};

public:
	static int changeCurrent();
	int getCurrent();
};