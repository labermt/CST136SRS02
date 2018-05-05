#pragma once

class Hull
{
protected:
	virtual ~Hull() = default;
	int minTurnRad{};
	int maxWaveHt{};

public:
	Hull() = default;
	Hull(int const minTurn, int const maxWave);

	virtual void minTurnRadius() = 0;
	virtual void maxWaveHeight() = 0;

};

