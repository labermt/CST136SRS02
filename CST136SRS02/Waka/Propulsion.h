#pragma once
#include "Boat.h"
class Propulsion
{
protected:
	virtual ~Propulsion() = default;

public:
	Propulsion() = default;

	virtual void getKnots() = 0;

	void setKnots(const int newKnots) { knots = newKnots; };

	int knots{ 0 };

};

