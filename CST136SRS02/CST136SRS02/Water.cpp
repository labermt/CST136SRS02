#include "stdafx.h"
#include "Water.h"
#include <random>


Water::Water() noexcept
	:waveSize{20}
{
	update();
}

int Water::getWaveSize() const noexcept
{
	return waveSize;
}

void Water::update()
{
	//setup random generator
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	const std::uniform_int_distribution<int>  distr(getWaveSize() - 10, getWaveSize() + 10);

	//random wave size, smoothed
	const int newWaves = distr(generator);
	if (newWaves < 0) waveSize = 0;
	else waveSize = newWaves;
}
