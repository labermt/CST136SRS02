#pragma once
class Water
{
public:
	Water();
	virtual ~Water();
	float getSpeed();
	float getDirection();

	void updateCurrent();

private:
	float speed;
	float direction;
};

