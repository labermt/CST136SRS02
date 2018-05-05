#pragma once
#include "boat.h"
#include "paddle.h"
#include "multiHull.h"

class Canoe : public Boat
{
private:
	std::string doGetName() noexcept override; 
	std::vector<Propulsion*> paddle_{ &paddle_1 };
	MultiHull multiHull_;
	Paddle paddle_1;
};

