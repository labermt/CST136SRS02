#pragma once

class Hull
{
protected:
	enum class Radius {kShort, kLong, kNotSet};
	enum class WaveHeight {kSmall, kLarge, kNotSet};

public:
	Hull();
	
private:
	Radius turnRadius_{Radius::kNotSet};
	WaveHeight maxWaveHeight_{WaveHeight::kNotSet};

public:
	Radius getTurnRadius() const noexcept;
	WaveHeight getMaxWaveHeight() const noexcept;

	virtual void setTurnRadius(Radius const radius) noexcept = 0;
	virtual void setMaxWaveHeight(WaveHeight const height) noexcept = 0;
};

