#pragma once
#include "Hull.h"
class MultiHull final : public Hull
{
public:
	MultiHull();

	void minTurnRadius() override;
	void maxWaveHeight() override;
};

