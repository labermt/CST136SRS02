#ifndef MONOHULL_H
#define MONOHULL_H
#include "Hull.h"

class MonoHull final: public Hull
{
public:
	MonoHull();

protected:
	TurnRadius minTurnRadius() noexcept override;
	WaveHeight maxWaveHeight() noexcept override;

};
#endif
