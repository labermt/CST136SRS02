#include "stdafx.h"
#include <cassert>
#include "chart.h"
#include "gps.h"

// Map of new zealand borrowed from classmate DRew Deraita 

void Chart::setFeature(const int lat, const int lng, const Feature feature)
{
	if (lat >= 0 && lat < latExtent && lng >= 0 && lng < lngExtent)
	{
		feature_[lat][lng] = feature;
	}
	else
	{
		assert(false);
	}
}

void Chart::setFeature(const GPS gps, const Feature feature)
{
	const auto lat{ gps.getlat() };
	const auto lng{ gps.getlng() };
	setFeature(lat, lng, feature);
}

Chart::Feature Chart::getFeature(const GPS gps) const
{
	const auto lat{ gps.getlat() };
	const auto lng{ gps.getlng() };
	const auto result{ getFeature(lat, lng) }; 
	return result;
}

Chart::Feature Chart::getFeature(const int lat, const int lng) const
{
	auto result = Feature::kUnknown;

	if (lat >= 0 && lat < latExtent && lng >= 0 && lng < lngExtent)
	{
			result = feature_[lat][lng];
	}
	return result;
}

Chart::Chart() noexcept :
feature_
{
	{ Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kStart, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kShallowWater, Feature::kLand, Feature::kLand, Feature::kShallowWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kShallowWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kDeepWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown },
}
{
}
