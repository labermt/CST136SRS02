#pragma once

class Water
{
public:
	Water() = default;
	
	void setWaterSpeed(int const waterCurrent);

private:
	int waterCurrentSpeed{};
};

