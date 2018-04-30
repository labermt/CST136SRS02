#pragma once
class Chart
{
public:
	Chart();
	enum class Feature
	{
		kWater = 0, 
		kLand = 1,
		kBorder = 2
	};
	Feature getFeature(int lat, int lng) const;

private:
	Feature map_[20][20];
};

