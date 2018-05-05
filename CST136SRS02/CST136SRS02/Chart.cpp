#include "stdafx.h"
#include "Chart.h"

Chart::Chart(int lat_, int lng_, int angle_) noexcept
	:lat {lat_}, lng { lng_ }, angle { angle_ }, timeElapsed {0}
{
}

int Chart::getLat() const noexcept
{
	return lat;
}

int Chart::getLng() const noexcept
{
	return lng;
}

int Chart::getAngle() const noexcept
{
	return angle;
}

int Chart::getTimeElapsed() const noexcept
{
	return timeElapsed;
}

void Chart::incrementTimeElapsed() noexcept
{
	timeElapsed++;
}

void Chart::setCoordinates(int lat_, int lng_, int angle_) noexcept
{
	lat = lat_;
	lng = lng_;
	angle = angle_;
}
