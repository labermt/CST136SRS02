#pragma once

class Wind
{
	enum class wind_direction{north,east,south,west};
	
	wind_direction wind_;

public:
	wind_direction get_wind_direction();

	Wind();
	~Wind();
};
