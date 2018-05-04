#pragma once
#include "boat.h"

class Raft :
	public Boat

{
protected:
	std::string do_get_name() override;

public:
	Raft(std::string name, Hull& hull_type, Chart& chart);
};

