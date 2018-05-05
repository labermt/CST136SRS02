#pragma once
#include "boat.h"
#include <string>
#include "sailboat.h"
#include "multiHull.h"
#include "sail.h"

using namespace std::literals::string_literals;

class Sailboat : public Boat
{
private:
	std::string doGetName() override;
	MultiHull multiHull_;
	Sail sail_; 
	std::vector<Propulsion*> sail2_{ &sail_ };
public:
	Sailboat();
};

