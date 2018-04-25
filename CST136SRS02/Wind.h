#pragma once
class Wind
{
public:
	Wind();
	virtual ~Wind();

	float getSpeed();
	float getDirection();

	void updateWind();

private: 
	float speed;
	float direction;



};

