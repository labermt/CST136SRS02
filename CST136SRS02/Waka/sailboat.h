#pragma once
#include "boat.h"
#include "multiHull.h"
#include "sail.h"

class Sailboat : public Boat
{
private:
	std::string doGetName() noexcept override;
	std::vector<Propulsion*> sail2_{ &sail_ };
	MultiHull multiHull_;
	Sail sail_; 
};

