#pragma once
#include <string>
#include <vector>
#include "boat.h"
#include "monoHull.h"
#include "paddle.h"

using namespace std::literals::string_literals;

class Raft : public Boat
{
private:
	std::string doGetName() noexcept override; 
	MonoHull monoHull_; 
	Paddle paddle_1; 
	Paddle paddle_2; 
	std::vector<Propulsion*> paddle_{&paddle_1, &paddle_2};
};

