#pragma once
#include "boat.h"
#include <string>

class Raft : public Boat
{
private:
	 std::string getName() override;	 
};

