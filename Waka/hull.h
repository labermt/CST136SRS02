#pragma once

class Hull
{
protected:
	virtual const int do_minTurnRadius();
	virtual const int do_maxWaveHeight();
	
public:
	const int minTurnRadius();
	const int maxWaveHeight();
};