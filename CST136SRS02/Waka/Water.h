#pragma once

class Water
{
public:
	Water() = default;
	
	void setWaterSpeed(int const waterCurrent);
	auto returnWaterSpeed() const { return waterCurrentSpeed; };

private:
	int waterCurrentSpeed{};
};

