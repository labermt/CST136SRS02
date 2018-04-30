#pragma once
#include "Boat.h"
class Sailboat : public Boat
{
protected:
	std::string do_get_name() const override;
public:
	Sailboat(std::string name);
	~Sailboat() = default;
};

