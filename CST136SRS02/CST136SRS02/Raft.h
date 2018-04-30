#pragma once
#include "Boat.h"
#include <string>

class Raft : public Boat
{
protected:
	std::string do_get_name() const override;
public:
	Raft(std::string name);
	~Raft() = default;
};

