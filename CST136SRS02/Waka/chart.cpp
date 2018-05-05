#include "stdafx.h"
#include "chart.h"
#include "stdafx.h"
#include <cassert>
#include "gps.h"
#include "chart.h"

Chart::Feature Chart::getFeature(int lat, int lng) const
{
	return Feature();
}

void Chart::setFeature(const int lat, const int lng, const Feature feature)
{
}

void Chart::setFeature(const GPS gps, const Feature feature)
{
}

Chart::Feature Chart::getFeature(const GPS gps) const
{
	const auto lat{ gps.getlat() };
	const auto lng{ gps.getlng() };
	const auto result = getFeature(lat, lng);

	return result;
}