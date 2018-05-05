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
		kStrt,
		kStop
	};

private:
	Feature map_[20][10];

private:
	static constexpr auto latExtent{ std::extent<decltype(Chart::map_), GPS::Coordinate::kLat>::value };
	static constexpr auto lngExtent{ std::extent<decltype(Chart::map_), GPS::Coordinate::kLng>::value };

public:
	Chart() noexcept;
public:
	void setFeature(int lat, int lng, const Feature feature) noexcept;
	void setFeature(const GPS gps, const Feature feature) noexcept;

	Feature getFeature(int lat, int lng) const noexcept;
	Feature getFeature(GPS gps) const noexcept;
};

