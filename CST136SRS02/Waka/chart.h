#pragma once
class Chart
{
public:

	Chart();
	~Chart() = default;

	int getMilesFirst();
	int getMilesSecond();
	int getMilesThird();
	int getMilesFourth();
	int getMilesFinal();

	void setMilesFirst(int milesTraveled);
	void setMilesSecond(int milesTraveled);
	void setMilesThird(int milesTraveled);
	void setMilesFourth(int milesTraveled);
	void setMilesFinal(int milesTraveled);
	
private:
	int milesFirst;
	int milesSecond;
	int milesThird;
	int milesFourth;
	int milesFinal;

};

