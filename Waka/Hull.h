#ifndef HULL_H
#define HULL_H

#include "Boat.h"

class Hull
{
protected:
	Hull();

protected:
	enum class TurnRadius { kNarrow = 90, kWide = 180 };

	enum class WaveHeight { kLow = 2, kHigh = 5 };

protected:
	virtual TurnRadius minTurnRadius() noexcept = 0;
	virtual WaveHeight maxWaveHeight() noexcept = 0;

public:
	TurnRadius getTurnRadius();
	WaveHeight getWaveHeight();

public:
	virtual ~Hull() = default;
};
//turn more easily if MonoHull but be more stable if MultiHull.
#endif
