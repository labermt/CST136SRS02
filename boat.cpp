#include "boat.h"
#include "hull.h"
#include "propulsion.h"


string boat::getName() {
	return do_getName();
}

void boat::setName(string name)
{
	name_ = name;
}

void boat::addPropulsion(propulsion * prop)
{
	propulsions_.push_back(prop);
}

void boat::addHull(hull * theHull)
{
	hull_ = theHull;
}
void boat::turnLeft()
{
	
}
void boat::turnRight()
{
	
}