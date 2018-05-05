#include "stdafx.h"
#include "sail.h"
#include "random"
#include "randomdirection.h"


Sail::Sail() : sailDirection(Cardinal::ANCHORED) {}


void Sail::setDirection(const Cardinal windDirection) 
{
	Randomdirection randDir;

	sailDirection = randDir.generate();
	

	while (sailDirection == windDirection) {

		throw "Bad sail direction, Strong winds caused boat to capsize!";
		sailDirection = randDir.generate();

	}
}

Cardinal Sail::getDirection() const {

	return sailDirection;
}

std::string Sail::getDirectionString() const
{
	//could have used Boost preprocessing stuff for enum conversion, but didn't understand how it worked, so implimented a switch for output
	switch (sailDirection)
	{
		case Cardinal::N: 
			return "North";
		case Cardinal::S:
			return "South";
		case Cardinal::E:
			return "East";
		case Cardinal::W:
			return "West";
		case Cardinal::NE:
			return "Northeast";
		case Cardinal::SE:
			return "Southeast";
		case Cardinal::NW:
			return "Northwest";
		case Cardinal::SW:
			return "Southwest";
		default:	return "No direction set";
	}
}

void Sail::do_setSpeed(int n) noexcept {

	Propulsion::do_setSpeed(n);
}

void Sail::setSpeed(const int current, const Cardinal windDirection, int windSpeed) noexcept
{
	//figure out how to calculate speed based on wind direction, sail direction and current speed
	//needs to be set right after instance created in boat
	//do_setSpeed(1);

	auto windMultiplier = 0.0;

	//NORTH
	if (windDirection == Cardinal::N && (sailDirection == Cardinal::NW || sailDirection == Cardinal::NE))
	{
		windMultiplier = 4;
	}	
	else if (windDirection == Cardinal::N && (sailDirection == Cardinal::E || sailDirection == Cardinal::W))
	{
		windMultiplier = 2;
	}
	else if (windDirection == Cardinal::N && (sailDirection == Cardinal::SW || sailDirection == Cardinal::SE))
	{
		windMultiplier = 1.5;
	}
	else if (windDirection == Cardinal::N && sailDirection == Cardinal::S)
	{
		windMultiplier = 1;
	}//SOUTH
	else if (windDirection == Cardinal::S && (sailDirection == Cardinal::SW || sailDirection == Cardinal::SE))
	{
		windMultiplier = 4;
	}
	else if (windDirection == Cardinal::S && (sailDirection == Cardinal::E || sailDirection == Cardinal::W))
	{
		windMultiplier = 2;
	}
	else if (windDirection == Cardinal::S && (sailDirection == Cardinal::NW || sailDirection == Cardinal::NE))
	{
		windMultiplier = 1.5;
	}
	else if (windDirection == Cardinal::S && sailDirection == Cardinal::N)
	{
		windMultiplier = 1;
	}//EAST
	else if (windDirection == Cardinal::E && (sailDirection == Cardinal::NE || sailDirection == Cardinal::SE))
	{
		windMultiplier = 4;
	}
	else if (windDirection == Cardinal::E && (sailDirection == Cardinal::N || sailDirection == Cardinal::S))
	{
		windMultiplier = 2;
	}
	else if (windDirection == Cardinal::E && (sailDirection == Cardinal::NW || sailDirection == Cardinal::SW))
	{
		windMultiplier = 1.5;
	}
	else if (windDirection == Cardinal::E && sailDirection == Cardinal::W)
	{
		windMultiplier = 1;
	}//WEST
	else if (windDirection == Cardinal::W && (sailDirection == Cardinal::NW || sailDirection == Cardinal::SW))
	{
		windMultiplier = 4;
	}
	else if (windDirection == Cardinal::W && (sailDirection == Cardinal::N || sailDirection == Cardinal::S))
	{
		windMultiplier = 2;
	}
	else if (windDirection == Cardinal::W && (sailDirection == Cardinal::SE || sailDirection == Cardinal::NE))
	{
		windMultiplier = 1.5;
	}
	else if (windDirection == Cardinal::W && sailDirection == Cardinal::E)
	{
		windMultiplier = 1;
	}//NE
	else if (windDirection == Cardinal::NE && (sailDirection == Cardinal::N || sailDirection == Cardinal::E))
	{
		windMultiplier = 4;
	}
	else if (windDirection == Cardinal::NE && (sailDirection == Cardinal::NW || sailDirection == Cardinal::SE))
	{
		windMultiplier = 2;
	}
	else if (windDirection == Cardinal::NE && (sailDirection == Cardinal::W || sailDirection == Cardinal::S))
	{
		windMultiplier = 1.5;
	}
	else if (windDirection == Cardinal::NE && sailDirection == Cardinal::SW)
	{
		windMultiplier = 1;
	}//NW
	else if (windDirection == Cardinal::NW && (sailDirection == Cardinal::N || sailDirection == Cardinal::W))
	{
		windMultiplier = 4;
	}
	else if (windDirection == Cardinal::NW && (sailDirection == Cardinal::SW || sailDirection == Cardinal::NE))
	{
		windMultiplier = 2;
	}
	else if (windDirection == Cardinal::NW && (sailDirection == Cardinal::S || sailDirection == Cardinal::E))
	{
		windMultiplier = 1.5;
	}
	else if (windDirection == Cardinal::NW && sailDirection == Cardinal::SE)
	{
		windMultiplier = 1;
	}//SW
	else if (windDirection == Cardinal::SW && (sailDirection == Cardinal::S || sailDirection == Cardinal::W))
	{
		windMultiplier = 4;
	}
	else if (windDirection == Cardinal::SW && (sailDirection == Cardinal::SE || sailDirection == Cardinal::NW))
	{
		windMultiplier = 2;
	}
	else if (windDirection == Cardinal::SW && (sailDirection == Cardinal::N || sailDirection == Cardinal::E))
	{
		windMultiplier = 1.5;
	}
	else if (windDirection == Cardinal::SW && sailDirection == Cardinal::NE)
	{
		windMultiplier = 1;
	}//SE
	else if (windDirection == Cardinal::SE && (sailDirection == Cardinal::S || sailDirection == Cardinal::E))
	{
		windMultiplier = 4;
	}
	else if (windDirection == Cardinal::SE && (sailDirection == Cardinal::SW || sailDirection == Cardinal::NE))
	{
		windMultiplier = 2;
	}
	else if (windDirection == Cardinal::SE && (sailDirection == Cardinal::N || sailDirection == Cardinal::W))
	{
		windMultiplier = 1.5;
	}
	else if (windDirection == Cardinal::SE && sailDirection == Cardinal::NW)
	{
		windMultiplier = 1;
	}

	do_setSpeed(current + (windMultiplier * windSpeed));

}

int Sail::do_getSpeed() const
{
	return Propulsion::do_getSpeed();
}
