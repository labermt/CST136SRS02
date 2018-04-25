#pragma once
#include "Hull.h"
class MonoHull :
	public Hull
{
public:
	MonoHull();
	virtual ~MonoHull();

	float minTurnRadius();
	float maxWaveHeight();
};

