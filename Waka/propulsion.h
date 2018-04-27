#pragma once

class paddle
{
private:
	const int speed_{ 2 };

public:
	const int getSpeed();
};

class sail
{
private:
	const int speed_{ 5 };

public:
	const int getSpeed();
};

class propulsion
{
private:
	paddle paddle_{};
	sail sail_{};

public:
	const int getSpeed();
};