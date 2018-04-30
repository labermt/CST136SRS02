#pragma once
class Water
{
private:
	int waveSize; //0 to 100
public:
	Water();
	int getWaveSize() const;
	void update();
};

