#pragma once
#include "Boat.h"
class Canoe : public Boat
{
protected:
	std::string do_get_name() const override;
public:
	Canoe(std::string name);
};

