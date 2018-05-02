#pragma once

#include <string>
#include "propulsion.h"
#include "cardinal.h"

class Sail : public Propulsion
{


public:

	Sail();
	~Sail();

	void setDirection(Cardinal direction) noexcept;

	Cardinal getDirection() const;
	std::string getDirectionString() const;

	void setSpeed(const int current, const Cardinal windDirection) noexcept;

private:

	int do_getSpeed() const override;
	void do_setSpeed(int n) noexcept override;

	Cardinal sailDirection;

};

