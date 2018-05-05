#include "stdafx.h"
#include "pi.h"
#include "wind.h"

Wind::Wind() noexcept :
gen_{ rd_() },
randomMagnitude_{ 0, 20 }, // knots
randomAngle_{ 0, 2 * pi },
magnitude_{ 0 },
angle_{ 0 }
{
	updateWind();
}

double Wind::getMagnitude() const noexcept
{
	return magnitude_;
}


double Wind::getAngle() const noexcept
{
	return angle_;
}

void Wind::updateWind() noexcept
{
	magnitude_ = randomMagnitude_(gen_);
	angle_ = randomAngle_(gen_);
}
