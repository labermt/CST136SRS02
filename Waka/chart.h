#pragma once

class Chart
{
public:
	enum class orientation { north, ne, east, se, south, sw, west, nw };

private:
	int lat_{};
	int lng_{};
	orientation dirrection{};

public:
	Chart(int lat, int lng, orientation facing);

	const int getlat();
	const int getlng();
	orientation getdirrection();

	void setlat(const int data);
	void setlng(const int data);
	void setdirrection();
};