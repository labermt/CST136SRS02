#include "stdafx.h"
#include "Chart.h"

Chart::Chart(int lat_, int lng_, int angle_)
	:lat {lat_}, lng { lng_ }, angle { angle_ }, timeElapsed {0}
{
}

int Chart::getLat() const
{
	return lat;
}

int Chart::getLng() const
{
	return lng;
}

int Chart::getAngle() const
{
	return angle;
}

int Chart::getTimeElapsed() const
{
	return timeElapsed;
}

void Chart::incrementTimeElapsed()
{
	timeElapsed++;
}

void Chart::setCoordinates(int lat_, int lng_, int angle_)
{
	lat = lat_;
	lng = lng_;
	angle = angle_;
}
