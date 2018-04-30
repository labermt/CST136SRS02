#pragma once
class Chart
{
public:
	Chart(int lat_, int lng_, int angle_);
	int getLat() const;
	int getLng() const;
	int getAngle() const;
	int getTimeElapsed() const;

	void setCoordinates(int lat_, int lng_, int angle_);

private:
	int lat, lng; //x and y
	int angle;
	int timeElapsed;
};

