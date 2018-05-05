#pragma once
#include "boat.h"
#include "monoHull.h"
#include "paddle.h"

class Canoe : public Boat
{
private:
	std::string doGetName() override;
	MonoHull monoHull_;
	Paddle paddle_1;
	std::vector<Propulsion*> paddle_{ &paddle_1 };
public:
	Canoe();

};

