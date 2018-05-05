#pragma once
class Propulsion
{
private:
	virtual void doGetKnots() = 0; //= 0 means you cannot create a boat anymore 
public:
	void getKnots(); 
};

