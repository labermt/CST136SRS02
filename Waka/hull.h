#pragma once

class Hull
{
protected:
	virtual int do_minTurnRadius();
	virtual int do_maxWaveHeight();
	
public:
	int minTurnRadius();
	int maxWaveHeight();
	void turnRight();
	void turnLeft();

};