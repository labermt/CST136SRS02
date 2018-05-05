#pragma once
class Propulsion
{
private:
	int knots;
protected:
	virtual int do_get_knots() const noexcept = 0; //behind the scenes function

public:
	Propulsion() noexcept;
	int getKnots() const noexcept;

	void setKnots(int) noexcept;
};

