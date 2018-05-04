#include "stdafx.h"
#include "environment.h"
#include "boat.h"

environment::environment() :
	topography_
{
	{ properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown },
	{ properties::kunknown, properties::kwater, properties::kwater, properties::kwater, properties::kwater, properties::kwater, properties::kwater, properties::kunknown },
	{ properties::kunknown, properties::kwater, properties::kwater, properties::kland, properties::kwater, properties::kwater, properties::kwater, properties::kunknown },
	{ properties::kunknown, properties::kwater, properties::kwater, properties::kwater, properties::kland, properties::kland, properties::kwater, properties::kunknown },
	{ properties::kunknown, properties::kwater, properties::kwater, properties::kwater, properties::kland, properties::kwater, properties::kwater, properties::kunknown },
	{ properties::kunknown, properties::kwater, properties::kwater, properties::kland, properties::kwater, properties::kwater, properties::kwater, properties::kunknown },
	{ properties::kunknown, properties::kwater, properties::kland, properties::kland, properties::kwater, properties::kwater, properties::kwater, properties::kunknown },
	{ properties::kunknown, properties::kwater, properties::kland, properties::kwater, properties::kwater, properties::kwater, properties::kwater, properties::kunknown },
	{ properties::kunknown, properties::kwater, properties::kwater, properties::kwater, properties::kwater, properties::kwater, properties::kwater, properties::kunknown },
	{ properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown, properties::kunknown }
}
{ }

environment::properties environment::getTileProperties(int lat, int lng)
{
	return topography_[lat][lng];;
}