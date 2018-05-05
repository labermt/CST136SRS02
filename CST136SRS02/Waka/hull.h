#pragma once

class Hull
{

protected:
	enum class TurnRadius { kShort, kLong };
	enum class WaveHeight { kSmall, kLarge };

public:
	virtual TurnRadius minTurnRadius() = 0; // = 0 means you cannot create a boat anymore 
	virtual WaveHeight maxWaveHeight() = 0; 
protected:
	~Hull() = default;

};

