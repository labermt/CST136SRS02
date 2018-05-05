// Code borrowed from Mitch Besser https://github.com/labermt/CST126SRS03 
//
#pragma once

#include "direction.h"

class GPS
{
public:
	enum Coordinate { kLng = 0, kLat = 1 };

public:
	GPS(const int lat, const int lng) noexcept;

private:
	int lat_{-1};
	int lng_{-1};

public:
	static constexpr int rangeTheta(const int theta) noexcept;

public:
	static int theta(const int x, const int y) noexcept;
	static Direction cardinal(const int direction) noexcept;

private:
	void set(int lat, int lng) noexcept;

public:
	int getlat() const noexcept;
	int getlng() const noexcept;

public:
	void move(const int direction, const unsigned distance);
};
