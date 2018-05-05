#pragma once
class Hull
{
private:
	virtual double minTurnRadius() = 0;
	virtual int maxWaveHeight() = 0;
public:
	Hull();
	double do_minTurnRadius();
	int get_maxWaveHeight();
	virtual ~Hull();
};

