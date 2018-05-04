#pragma once

class Hull
{
protected:
	virtual int do_minTurnRadius();
	virtual int do_maxWaveHeight();
	
public:
	void minTurnRadius();
	void maxWaveHeight();
};