#pragma once

#include <string>
#include "propulsion.h"
#include "cardinal.h"

class Sail : public Propulsion
{


public:

	Sail();
	~Sail() = default;

	void setDirection(const Cardinal windDirection);

	Cardinal getDirection() const;
	std::string getDirectionString() const;

	//change these arguments to const ref to Current and Wind
	void setSpeed(const int current, const Cardinal windDirection, int windSpeed) noexcept;

private:

	int do_getSpeed() const override;
	void do_setSpeed(int n) noexcept override;

	Cardinal sailDirection;

};

