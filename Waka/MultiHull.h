#ifndef MULTIHULL_H
#define MULTIHULL_H

#include "Hull.h"

class MultiHull final: public Hull
{
protected:
	MultiHull() = default;

protected:
	TurnRadius minTurnRadius() noexcept override;
	WaveHeight maxWaveHeight() noexcept override;
};
#endif
