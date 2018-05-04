#pragma once

class Chart
{
	enum class feature { deep_water, water, land };
	
	feature feature_[10][10];
public:

	Chart();
};
