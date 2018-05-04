#pragma once

class Propulsion
{
private:
	const int paddles_{};
	const int sails_{};

protected:
	const virtual int do_getKnots();

public:
	Propulsion(const int d0, const int d1);

	const int getKnots();
};