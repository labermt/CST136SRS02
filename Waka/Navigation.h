#ifndef NAVIGATION_H
#define NAVIGATION_H

#include "Direction.h"

class Navigation
{
public:
	enum Coordinates { kLng = 0, kLat = 1};

public:
	Navigation(const int lat, const int lng);

private:
	int lat_{ -1 };
	int lng_{ -1 };

public:
	static int theta(const int x, const int y);
	static int rangeTheta(const int theta);

	static Direction compRose(const int direction);

private:
	void set(int lat, int lng); //to set pushOff_ (boat start coOrds)

public:
	int getlat() const;
	int getlng() const;

public:
	void move(const int direction, const unsigned distance);
};
#endif
