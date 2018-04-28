#pragma once
#include <string>


using namespace std;


class Hull 
{
public:
	Hull();
	virtual ~Hull();

	float min_turn_radius() { return 0; }
	float max_wave_height() { return 0; }

};

