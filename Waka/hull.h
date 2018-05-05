#pragma once

class Hull
{
private:
	virtual double minTurnRadius() const noexcept = 0;
	virtual double maxWaveHeight() const noexcept = 0;
	virtual double addedStability() const noexcept = 0;
	
public:
	Hull() = default;
	Hull(const Hull& hull) = delete;
	Hull(Hull&& hull) = delete;
	Hull& operator=(const Hull& hull) = delete;
	Hull& operator=(Hull&& hull) = delete;
	virtual ~Hull() = default;

	double getMinTurnRadius() const noexcept;
	double getMaxWaveHeight() const noexcept;
	double getAddedStability() const noexcept;
};