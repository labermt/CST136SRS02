#pragma once

class Propulsion
{
protected:
	virtual ~Propulsion() = default;
	int knots{};

public:
	Propulsion() = default;
	Propulsion(const int knotSpeed);

	virtual void getKnots() = 0;

	int currentKnots() const;

};

