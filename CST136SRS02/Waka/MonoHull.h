#pragma once
#include "Hull.h"
class MonoHull final : public Hull
{
public:
	MonoHull();
	~MonoHull();

	void minTurnRadius();
	void maxWaveHeight();
};

