#pragma once
class Propulsion
{
private:
	virtual void doGetKnots() = 0; 

public:
	void getKnots(); 
};

