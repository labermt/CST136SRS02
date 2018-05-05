#pragma once
#include <random>

class Wind
{
private:
	std::random_device rd_;
	std::mt19937 gen_;
	std::uniform_real_distribution<double> randomMagnitude_;
	std::uniform_real_distribution<double> randomAngle_;

	double magnitude_;
	double angle_;

public:
	Wind() noexcept;

	double getMagnitude() const noexcept;
	double getAngle() const noexcept;
	
	void updateWind() noexcept;
};