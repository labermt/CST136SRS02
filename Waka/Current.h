#ifndef CURRENT_H
#define CURRENT_H

#include "Strength.h"
#include "Direction.h"

class Current
{
protected:
	Current(Strength strength, Direction direction);

private:
	Strength strength_{ kSteady }; 
	Direction direction_ { kNorth };

private:
	void setStrength(Strength strength);
	void setDirection(Direction direction);

private:
	void simulateCurrent() noexcept; //randomizes direction_ and strength_
	int random(const int combos) const;

public:
	Strength getStrength() const;
	Direction getDirection() const;
};
#endif