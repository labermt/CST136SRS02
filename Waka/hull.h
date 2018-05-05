#pragma once

// TODO: Will this work for setting radius and height? or should minTurnRadius just display the radius.
class Hull
{
protected:
	enum class TurnRadius {kShort, kLong};
	enum class WaveHeight {kSmall, kLarge};

protected:
	~Hull() = default;
	
private:
	virtual TurnRadius doGetMinTurnRadius() const noexcept = 0;
	virtual WaveHeight doGetMaxWaveHeight() const noexcept = 0;

public:
	TurnRadius getMinTurnRadius() const noexcept { return doGetMinTurnRadius(); }
	WaveHeight getMaxWaveHeight() const noexcept { return doGetMaxWaveHeight(); }
};
