#pragma once
#include "Boat.h"
class Raft :
	public Boat
{
public:
	Raft();
	virtual ~Raft();

	void updateBoat(Water wa, Wind wi);


};

