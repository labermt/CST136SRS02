#pragma once
class Chart
{
public:
	Chart(int lat_, int lng_, int angle_) noexcept;
	int getLat() const noexcept;
	int getLng() const noexcept;
	int getAngle() const noexcept;
	int getTimeElapsed() const noexcept;
	void incrementTimeElapsed() noexcept;

	void setCoordinates(int lat_, int lng_, int angle_) noexcept;

private:
	int lat, lng; //x and y
	int angle;
	int timeElapsed;
};

