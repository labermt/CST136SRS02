#pragma once
class Wind
{
public:
	Wind();
	virtual ~Wind();

	float get_speed();
	float get_direction();

	void update_wind();

private: 
	float speed_;
	float direction_;



};

