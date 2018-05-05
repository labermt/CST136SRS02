#pragma once
#include "direction.h"

class Water
{
private:
	Direction currentDirection_{kNorth}; 
	// unsigned waveHeight_;

public:
	Direction getCurrentDirection() const noexcept;
	// unsigned waveHeight() const noexcept;

private:
	void setCurrentDirection();
	//void setWaveHeight();
};

