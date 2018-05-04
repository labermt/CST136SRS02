#pragma once
#include <string>

class Boat
{
private:
	std::string name_{};
	int orientation_{ 0 };

protected:
	virtual std::string do_getName();

public:
	std::string getName();
	void turnRight();
	void turnLeft();
};