#pragma once
#include <string>


using namespace std;


class Hull 
{
public:
	Hull();
	virtual ~Hull();

	float minTurnRadius() { return 0; }
	float maxWaveHeight() { return 0; }

};

