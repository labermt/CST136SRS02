#pragma once
class Hull
{
public:
	virtual void minTurnRadius() = 0; // = 0 means you cannot create a boat anymore 
	virtual void maxWaveHeight() = 0; 
protected:
	virtual ~Hull() = default;

private:
	enum class TurnRadius { kShort, kLong };
	enum class WaveHeight {kSmall, kLarge};
};

