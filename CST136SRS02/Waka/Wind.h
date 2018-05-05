#pragma once

class Wind
{
protected:
	int windSpd{};

public:
	Wind() = default;
	
	void setWindSpeed(int const windSpeed);
	int returnWindSpeed() const { return windSpd; } 

	
};

