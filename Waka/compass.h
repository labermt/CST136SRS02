#pragma once

class compass
{
public:
	enum class orientation { north, ne, east, se, south, sw, west, nw };

private:
	orientation dirrection_{orientation::north};

public:
	orientation getdirrection();

	void setdirrection(orientation data);
};