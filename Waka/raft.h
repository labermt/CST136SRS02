#pragma once
#include "boat.h"

class Raft :
	public Boat

{
protected:
	std::string do_get_name() override;

public:
	Raft(std::string name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart);
};

