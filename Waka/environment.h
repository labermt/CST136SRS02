#pragma once
#include "water.h"
#include "wind.h"

class environment
{
public:
	enum class properties { kunknown, kwater, kland };

private:
	const properties topography_[10][10];

public:
	Water water_;
	Wind wind_;

	environment();

	properties getTileProperties(const int lat, const int lng) const;
};