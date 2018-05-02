#pragma once

class Hull
{
protected:
	enum class turn_radius{small, large};
	enum class max_wave_height{small, large};
public:
	virtual ~Hull();
};
