#pragma once
#include "Hull.h"
class MultiHull final : public Hull
{
public:
	MultiHull();
	~MultiHull();

	void minTurnRadius();
	void maxWaveHeight();
};

