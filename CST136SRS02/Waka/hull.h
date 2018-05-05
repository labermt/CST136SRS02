#pragma once
class Hull
{

public:

	Hull();
	virtual ~Hull() = default;

	int getMaxWaveHeight() const;
	int getMinTurnRadius() const;

protected:

	virtual int do_getMaxWaveHeight() const = 0;
	virtual int do_getMinTurnRadius() const = 0;

	int minTurnRadius;
	int maxWaveHeight; //in feet

private:
	
};

