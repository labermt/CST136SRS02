#pragma once
#include "boat.h"

class Raft final : public Boat
{
public:
	Raft() = default;

public:
	void do_get_name() override;
};

