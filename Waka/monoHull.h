#pragma once
#include "hull.h"

class MonoHull : public Hull
{
private:
	double minTurnRadius() const noexcept override;
	double maxWaveHeight() const noexcept override;
	double addedStability() const noexcept override;
};