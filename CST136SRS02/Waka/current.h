#pragma once

#include "cardinal.h"
#include "string"

class Current
{
public:

	Current();
	~Current() = default;

	Cardinal getDirection() const noexcept;
	std::string getDirectionString() const noexcept;
	int getspeed() noexcept;
	int getHeight() noexcept;

	void setSpeed(const int s) noexcept;
	void setHeight() noexcept;
	void setDirection(const Cardinal direction) noexcept;

private:

	Cardinal directionOfCurrent;
	int speed; //in knots
	int height; //in feet

};

