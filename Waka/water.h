#pragma once

class Water
{
	enum class wave_size{small,large};
	enum class current_direction{north,east,south,west};

	wave_size wave_size_;
	current_direction direction_;

public:
	wave_size get_wave_size();
	current_direction get_current_direction();
	void change_wind_direction();
	void change_wave_size();
	Water();
	~Water();
};
