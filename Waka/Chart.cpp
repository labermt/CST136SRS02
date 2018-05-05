#include "stdafx.h"

#include "Chart.h"
#include "Boat.h"

Chart::Chart() :
	feature_
{
	{ Feature:: kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kLand, Feature::kLand, Feature::kLand, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kWater, Feature::kUnknown },
	{ Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown, Feature::kUnknown }
},
pushOff_(0, 7) //push of from NZland
{}

Chart::Feature Chart::getFeature(int lat, int lng) const
{
	auto result = Feature::kUnknown;

	result = feature_[lat][lng];

	return result;
}

Chart::Feature Chart::getFeature(const Navigation nav) const
{
	const auto lat{ nav.getlat() };	
	const auto lng{ nav.getlng() };
	const auto result = getFeature(lat, lng);

	return result;
}

bool Chart::isKnown(const Feature feature)
{
	bool result{ true };

	switch (feature)
	{
	case Feature::kUnknown:
		result = false;
		break;

	case Feature::kLand:
	case Feature::kWater:
		result = true;
		break;
	}

	return result;
}