#pragma once
#include "boat.h"

class Raft : public Boat
{
private:

public:
	Raft(const std::string name, Hull * hull);

	const std::string do_getName() override;
};