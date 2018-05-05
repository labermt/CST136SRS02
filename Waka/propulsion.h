#pragma once

class Propulsion
{
protected:
	const virtual int do_getKnots();

public:
	const int getKnots();
};