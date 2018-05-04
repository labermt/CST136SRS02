#pragma once

class Propulsion
{
protected:
	virtual ~Propulsion() = default;
	int knots{1};

public:
	Propulsion() = default;
	Propulsion(const int knotSpeed);

	virtual void getKnots() = 0;

	//void setKnots(const int newKnots) { knots = newKnots; };

	

};

