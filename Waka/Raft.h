#ifndef RAFT_H
#define RAFT_H

#include "Boat.h"

class Raft final: public Boat //is-a: Inheritance
{
public:
	Raft(std::string const name, Propulsion& prop, Hull& hull);

protected:
	std::string doGetName() noexcept override;

public:
	void nav(Navigation& nav);
};
//has no propulsion, can only drift with current->water
#endif