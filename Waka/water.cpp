#include "stdafx.h"
#include "pi.h"
#include "water.h"

Water::Water() noexcept :
gen_{ rd_() },
randomWaveHeight_{ 0, 3.2 },
randomAngle_{ 0, 2 * pi },
waveHeight_{ 0 },
angle_{ 0 }
{
	updateWater();
}

double Water::getWaveHeight() const noexcept
{
	return waveHeight_;
}


double Water::getAngle() const noexcept
{
	return angle_;
}

double Water::getMagnitude() const noexcept // Returns knots
{
	constexpr auto knotPerMeterHeight = 5;
	return waveHeight_ * knotPerMeterHeight;
}

void Water::updateWater() noexcept
{
	waveHeight_ = randomWaveHeight_(gen_);
	angle_ = randomAngle_(gen_);
}
