#include "stdafx.h"
#include "chart.h"
#include <cassert>


Chart::Chart() :
map_
{
	{ Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kShal, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kShal, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kStrt, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kShal, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kShal, Feature::kLand, Feature::kLand, Feature::kShal, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kShal, Feature::kShal, Feature::kShal, Feature::kShal, Feature::kShal, Feature::kShal, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kDeep, Feature::kUnkn },
	{ Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn, Feature::kUnkn },
}
{
}

void Chart::setFeature(int lat, int lng, const Feature feature) 
{
	if (lat >= 0 && lat < latExtent && lng >= 0 && lng < lngExtent)
	{
		map_[lat][lng] = feature;
	}
	else
	{
		assert(false);
	}
}

void Chart::setFeature(const GPS gps, const Feature feature)
{
	auto const lat{ gps.getlat() };
	auto const lng{ gps.getlng() };
	setFeature(lat, lng, feature);
}

Chart::Feature Chart::getFeature(int lat, int lng) const
{
	auto result = Feature::kUnkn;

	if (lat >= 0 && lat < latExtent && lng >= 0 && lng < lngExtent)
	{
		result = map_[lat][lng];
	}

	return result;
}

Chart::Feature Chart::getFeature(GPS gps) const
{
	auto const lat{ gps.getlat() };
	auto const lng{ gps.getlng() };

	auto const result{ getFeature(lat, lng) };
	return result;
}

