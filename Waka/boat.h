#pragma once
#include <string>
#include "hull.h"

class Boat
{
public:
	Boat(Hull const &hull);
	virtual ~Boat() = default; // Guildline C35

protected:
	virtual void doGetName() noexcept = 0;

public:
	void getName() noexcept;

public:
	std::string name_;
	Hull const &hull_;
};

