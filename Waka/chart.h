#pragma once

class Chart
{
private:
	int lat_{};
	int lng_{};
	
	bool auckland_{ false };
	bool wellington_{ false };
	bool stewardIsland_{ false };
	bool nelson_{ false };

public:
	Chart(int lat, int lng);

	const int getlat();
	const int getlng();

	void setlat(const int data);
	void setlng(const int data);

	void hitauckland();
	void hitwellington();
	void hitstewardIsland();
	void hitnelson();
};