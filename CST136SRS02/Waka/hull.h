#pragma once
class Hull
{
public:
	Hull();
	~Hull();
public:
	virtual void minTurnRadius() = 0; //= 0 means you cannot create a boat anymore 
	virtual void maxWaveHeight() = 0; 
};

