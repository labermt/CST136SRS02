#pragma once
class Water
{
private:
	int waveSize; //0 to 100
public:
	Water() noexcept;
	int getWaveSize() const noexcept;
	void update();
};

