#pragma once
class Wind
{
public:
	enum class Direction
	{
		North,
		East,
		South,
		West
	};
	Wind();
	Wind::Direction getDirection() const;
	int getMPH() const;
	void update();

private:
	Direction direction; //N E S W
	int mph; //0 to 100 mph
};

