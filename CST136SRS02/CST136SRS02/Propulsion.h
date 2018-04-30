#pragma once
class Propulsion
{
private:
	int knots;
protected:
	virtual int do_get_knots() const = 0; //behind the scenes function
	virtual ~Propulsion() = default;

public:
	Propulsion();
	int getKnots() const;

	void setKnots(int);
};

