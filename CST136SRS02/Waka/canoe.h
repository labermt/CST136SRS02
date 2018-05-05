#pragma once
#include "boat.h"
#include "paddle.h"
#include "cardinal.h"
#include "chart.h"
#include "current.h"
#include "string"
#include "multiHull.h"

class Chart;

class Canoe final : public Boat
{


public:

	Canoe() = default;
	
	int getSpeed() const;
	Cardinal getDirection(const Current& current);
	std::string getDirectionString(const Current& current);

	void setSpeed(int speedOfCurrent) noexcept;
	void setPaddleStrength(int strength) noexcept;


	

private:

	//Will this be deleted once Canoe leaves scope or will it leak??
	Paddle paddle;

	MultiHull hull;

	std::string do_getName() const override;
	void do_setName(std::string name) noexcept override;

	

};

