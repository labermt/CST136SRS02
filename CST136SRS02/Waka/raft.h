#pragma once
#include "boat.h"
#include "cardinal.h"

class Raft final : public Boat
{

public:

	//Raft must have a direction based on current's direction to start
	Raft(Cardinal directionOfCurrent, int speedOfCurrent);

	std::string getDirectionString() noexcept;
	Cardinal getDirection() noexcept;

	void setDirection(const Cardinal directionOfCurrent);
	void setSpeed(const int speedOfCurrent);


private:

	std::string do_getName() const override;
	void do_setName(std::string n) noexcept override;

	Cardinal direction;
	int speed;

};

