#pragma once
#include "boat.h"
#include "cardinal.h"
#include "current.h"
#include "monoHull.h"

class Raft final : public Boat
{

public:

	//Raft must have a direction based on current's direction to start
	Raft(Cardinal directionOfCurrent, int speedOfCurrent);

	std::string getDirectionString() const noexcept;
	Cardinal getDirection() const noexcept;
	int getMaxHeight() const noexcept;

	void setDirection(const Current& current);
	void setSpeed(const int speedOfCurrent);

private:

	std::string do_getName() const override;
	void do_setName(std::string name) noexcept override;

	Cardinal direction;
	int speed;

	MonoHull hull;

};

