#pragma once
#include <string>
#include <vector>

using std::vector;
using std::string;

#include "propulsion.h"
#include "hull.h"

class boat
{
private:
	virtual string do_getName() = 0;
	string name_;
	vector<propulsion*> propulsions_;
	hull  * hull_;
public:
	boat();
	virtual ~boat() = 0;
	string getName();
	void setName(string name);
	void addPropulsion(propulsion* prop);
	void addHull(hull * theHull);
};