#pragma once
class Hull
{
private:
	int minTurnRadius;
	int maxWaveHeight;
protected:
	virtual int do_get_min_turn_radius() const = 0; //behind the scenes function
	virtual int do_get_max_wave_height() const = 0; //behind the scenes function
	virtual ~Hull() = default;

public:
	int getMinTurnRadius() const;
	int getMaxWaveHeight() const;
	Hull(int, int);
};

