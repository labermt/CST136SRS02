#pragma once
#include "Hull.h"
class MultiHull :
	public Hull

{
public:
	MultiHull();
	virtual ~MultiHull();

	float minTurnRadius();
	float maxWaveHeight();

};

