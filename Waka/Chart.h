#ifndef CHART_H
#define CHART_H

#include "Navigation.h"

class Chart
{
public:

enum class Feature
{
	kUnknown, //kUnknown defines that the boat is lost(hit boundary -> terminate voyage)
	kWater,
	kLand //pushOff_ of kLand
};

private:
	Feature feature_[16][16]; //See: feature_(NZLand).jpg
	Navigation pushOff_;

protected:
	Chart();

public:
	static bool isKnown(const Feature feature);

private:
	Feature getFeature(int lat, int lng) const;

public:
	Feature getFeature(const Navigation nav) const;
	
};
#endif
//aggregate class