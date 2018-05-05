#pragma once
#include <vector>

using namespace std; 

class Chart
{
public:
	Chart();
	virtual ~Chart();

	int is_finished();

	int get_leg() { return leg_number_; }
	int journey_size() { return distances_.size(); }

	float get_current_distance() { return current_distance_; }
	float get_leg_direction() { return directions_[leg_number_ - 1]; }
	float get_leg_distance() { return distances_[leg_number_ - 1]; }

	void increment_leg() { leg_number_++; }
	void set_current_distance(float d) { current_distance_ = d; }

private: 
	vector<float> distances_; 
	vector<float> directions_;
	int leg_number_;
	float current_distance_;

};

