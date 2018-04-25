#pragma once
#include <vector>

using namespace std; 

class Chart
{
public:
	Chart();
	virtual ~Chart();

	int isFinished();

	int getLeg() { return legNumber; }
	int journeySize() { return distances.size(); }

	float getCurrentDistance() { return currentDistance; }
	float getLegDirection() { return directions[legNumber - 1]; }
	float getLegDistance() { return distances[legNumber - 1]; }

	void incrementLeg() { legNumber++; }
	void setCurrentDistance(float d) { currentDistance = d; }

private: 
	vector<float> distances; 
	vector<float> directions;
	int legNumber;
	int currentDistance;

};

