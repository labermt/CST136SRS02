#pragma once
#include "hull.h"
class MultiHull : public Hull
{

public:
	MultiHull();
	~MultiHull() = default;

private:
	int do_getMaxWaveHeight() const override;
	int do_getMinTurnRadius() const override;
};

