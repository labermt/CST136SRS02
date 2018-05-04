#pragma once

class Propulsion
{
protected:
	virtual ~Propulsion() = default;
	

public:
	Propulsion() = default;
	Propulsion(const int knotSpeed);

	virtual void getKnots() = 0;

	int knots{};
	//void setKnots(const int newKnots) { knots = newKnots; };

	

};

