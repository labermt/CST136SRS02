#pragma once
#include "chart.h"
#include "direction.h"

class Water
{
	enum class wave_size{small,large};
	
	wave_size wave_size_{wave_size::small};
	Direction direction_{Direction::west};

public:
	wave_size get_wave_size();
	Direction get_current_direction();
	void change_wind_direction();
	void change_wave_size();
	Water();
	~Water();
};
