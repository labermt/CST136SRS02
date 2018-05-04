#pragma once
#include "boat.h"
#include "monohull.h"

class Canoe : public Boat
{
private:
	MonoHull canoehull_;

public:
	Canoe(const std::string name);

	std::string do_getName() override;

	void turnRight();
	void turnLeft();
};
