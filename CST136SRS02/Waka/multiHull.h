#pragma once
#include "hull.h"
class MultiHull : public Hull
{
private:
	void minTurnRadius() override; 
	void maxWaveHeight() override;
};

