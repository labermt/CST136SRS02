#pragma once
#include <random>

class Water
{
private:
	std::random_device rd_;
	std::mt19937 gen_;
	std::uniform_real_distribution<double> randomAngle_;
	std::uniform_real_distribution<double> randomWaveHeight_;

	double waveHeight_;
	double angle_;

public:
	Water() noexcept;

	double getWaveHeight() const noexcept;
	double getAngle() const noexcept;

	double getMagnitude() const noexcept;

	void updateWater() noexcept;
};