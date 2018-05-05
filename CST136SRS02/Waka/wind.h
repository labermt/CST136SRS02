#pragma once

#include "cardinal.h"
#include "string"

class Wind
{

public:
	Wind();
	~Wind() = default;

	int getSpeed() noexcept;
	Cardinal getDirection() noexcept;
	std::string getDirectionString() noexcept;

	void setSpeed(const int randomInt) noexcept;
	void setDirection() noexcept;

private:
	
	Cardinal direction;
	int speed;
};

