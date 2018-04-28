#pragma once
class Water
{
public:
	Water();
	virtual ~Water();
	float get_speed();
	float get_direction();

	void update_current();

private:
	float speed_;
	float direction_;
};

