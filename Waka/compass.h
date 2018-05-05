#pragma once

class compass
{
public:
	enum class orientation { north, ne, east, se, south, sw, west, nw };

private:
	orientation dirrection_{orientation::north};

public:
	orientation getdirrection();

	void setdirrection(const orientation data);
	const int dirrectionToInt(const orientation d0);
	const orientation intToDirrection(int d0);
};