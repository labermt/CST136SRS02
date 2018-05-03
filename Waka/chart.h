// Code borrowed from Mitch Besser https://github.com/labermt/CST126SRS03 
//
#pragma once
#include "gps.h"
#include <type_traits>

class Chart
{
public:
	enum class Feature
	{
		kUnkn, 
		kLand, 
		kShal, 
		kDeep,
		kStrt
	};

private:
	Feature map_[20][10];
private:
	static constexpr auto latExtent{ std::extent<decltype(Chart::map_), GPS::Coordinate::kLat>::value };
	static constexpr auto lngExtent{ std::extent<decltype(Chart::map_), GPS::Coordinate::kLng>::value };

public:
	Chart();
public:
	void setFeature(int lat, int lng, const Feature feature);
	void setFeature(const GPS gps, const Feature feature);

	Feature getFeature(int lat, int lng) const;
	Feature getFeature(GPS gps) const;

};

