#include "stdafx.h"
#include "environment.h"

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