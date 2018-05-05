#pragma once
#include "Boat.h"
#include <string>
#include "MonoHull.h"

class Raft : public Boat
{
protected:
	std::string do_get_name() const override;
public:
	Raft(std::string name);
};

