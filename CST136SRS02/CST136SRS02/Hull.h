#pragma once
class Hull
{
private:
	int minTurnRadius;
	int maxWaveHeight;
protected:
	virtual int do_get_min_turn_radius() const noexcept = 0; //behind the scenes function
	virtual int do_get_max_wave_height() const noexcept = 0; //behind the scenes function

public:
	int getMinTurnRadius() const noexcept;
	int getMaxWaveHeight() const noexcept;
	Hull(int, int) noexcept;
};

