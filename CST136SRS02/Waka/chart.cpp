#include "stdafx.h"
#include "chart.h"

#include "stdafx.h"

#include <cassert>
#include "gps.h"
#include "chart.h"

Chart::Feature Chart::getFeature(const GPS gps) const
{
	const auto lat{ gps.getlat() };
	const auto lng{ gps.getlng() };
	const auto result = getFeature(lat, lng);

	return result;
}