#pragma once
class propulsion


{
private:
	virtual const int do_getKnots();
	const int paddle_();
	const int sail_();
public:
	propulsion();
	virtual ~propulsion() = 0;

	propulsion(const int k0, const int k1);
	const int getKnots();
};

