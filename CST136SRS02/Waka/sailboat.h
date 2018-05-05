#pragma once

#include "boat.h"
#include "sail.h"
#include "cardinal.h"
#include "string"
#include "wind.h"
#include "current.h"
#include "multihull.h"

class Sailboat final : public Boat
{

public:

	Sailboat();

	int getSpeed() const noexcept;

	Cardinal getDirection() const noexcept;
	std::string getDirectionString() const noexcept;

	//take in the wind direction randomly pick a cardinal direction, check if they are the same, if not set to that direction
	void setDirection( Wind& wind) noexcept;

	void setSpeed(Current current, Wind windDirection) noexcept;

	

private:

	Sail sail;

	Cardinal direction;

	MultiHull hull;


	std::string do_getName() const override;
	void do_setName(std::string name) noexcept override;


};

