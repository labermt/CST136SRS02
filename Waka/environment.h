#pragma once
#include "water.h"
#include "wind.h"

class environment
{
public:
	enum class properties { kunknown, kwater, kland };

private:
	properties topography_[10][8];
	Water water_;
	Wind wind_;

public:
	environment();


};
