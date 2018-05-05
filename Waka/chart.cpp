#include "stdafx.h"
#include "chart.h"
// used map created by Drew, who is a calc master!


Chart::Chart() :
	map_
{
	{ Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::water, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::land, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::water, Feature::deep_water },
	{ Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water, Feature::deep_water },
}
{

}

