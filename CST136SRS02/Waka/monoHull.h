#pragma once
#include "hull.h"

class MonoHull : public Hull
{

public:
	MonoHull();
	~MonoHull() = default;

private:
	int do_getMaxWaveHeight() const override;
	int do_getMinTurnRadius() const override;

};

