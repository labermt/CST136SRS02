#pragma once
#include "water.h"
#include "wind.h"

class environment
{
public:
	enum class properties { kunknown, kwater, kland };

private:
	properties topography_[10][8];

public:
	Water water_;
	Wind wind_;

	environment();

	properties getTileProperties(int lat, int lng);
};