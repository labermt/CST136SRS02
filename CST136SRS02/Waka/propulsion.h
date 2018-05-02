#pragma once
class Propulsion
{
public:
	Propulsion();
public:
	virtual void getSpeed() = 0; //= 0 means you cannot create a boat anymore 
	~Propulsion();
};

