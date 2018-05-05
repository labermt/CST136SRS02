#pragma once
#include <type_traits>
#include "gps.h"

class Chart
{
public:
	enum class Feature 
	{
		kUnknown, 
		kLand, 
		kDeepWater, 
		kShallowWater, 
	};
private:
	Feature feature_[20][10];
public:
	static constexpr auto latExtent{ std::extent<decltype(Chart::feature_), GPS::Coordinate::kLat>::value };
	static constexpr auto lngExtent{ std::extent<decltype(Chart::feature_), GPS::Coordinate::kLng>::value };
private:
	Feature getFeature(int lat, int lng) const;
	void setFeature(const int lat, const int lng, const Feature feature);
	void setFeature(const GPS gps, const Feature feature);
	Feature getFeature(const GPS gps) const;
};

