#pragma once
#include "boat.h"

class Raft final : public Boat
{
public:
	Raft(Hull const &hull);

private:
	void doGetName() noexcept override;
};

