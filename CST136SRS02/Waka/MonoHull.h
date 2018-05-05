#pragma once
#include "Hull.h"
class MonoHull final : public Hull
{
public:
	MonoHull();

	void minTurnRadius() override;
	void maxWaveHeight() override;
};

