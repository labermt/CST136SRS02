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
	Wind() noexcept;
	Wind::Direction getDirection() const noexcept;
	int getMPH() const noexcept;
	void update();

private:
	Direction direction; //N E S W
	int mph; //0 to 100 mph
};

