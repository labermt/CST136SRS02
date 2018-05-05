#pragma once

class Wind
{
public:
	Wind() = default;
	
	void setWindSpeed(int const windSpeed);

private:
	int windSpd{};
};

