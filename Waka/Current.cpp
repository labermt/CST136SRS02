#include "stdafx.h"

#include <random>

#include "Current.h"

#include "gsl.h"

Current::Current(Strength strength, Direction direction) :
	strength_(strength), direction_(direction)
{}

void Current::simulateCurrent() noexcept //get random number, throw into switch that randomly picks from all the combinations of Strength/Direction
{
	const auto rand{ random(11) };

	Expects(rand >= 0 && rand < 12);

	switch (rand)
	{
		case 0:
		{
			setStrength(kWeak);
			setDirection(kNorth);
		}
		break;
		case 1:
		{
			setStrength(kWeak);
			setDirection(kEast);
		}
		break;
		case 2:
		{
			setStrength(kWeak);
			setDirection(kSouth);
		}
		break;
		case 3:
		{
			setStrength(kWeak);
			setDirection(kWest);
		}
		break;
		case 4:
		{
			setStrength(kSteady);
			setDirection(kNorth);
		}
		break;
		case 5:
		{
			setStrength(kSteady);
			setDirection(kEast);
		}
		break;
		case 6:
		{
			setStrength(kSteady);
			setDirection(kSouth);
		}
		break;
		case 7:
		{
			setStrength(kSteady);
			setDirection(kWest);
		}
		break;
		case 8:
		{
			setStrength(kStrong);
			setDirection(kNorth);
		}
		break;
		case 9:
		{
			setStrength(kStrong);
			setDirection(kEast);
		}
		break;
		case 10:
		{
			setStrength(kStrong);
			setDirection(kSouth);
		}
		break;
		case 11:
		{
			setStrength(kStrong);
			setDirection(kWest);
		}
		break;
		default:
		{
			setStrength(kSteady);
			setDirection(kNorth);
		}
		break;
	}
}

void Current::setStrength(Strength strength)
{
	strength_ = strength;
}

void Current::setDirection(Direction direction)
{
	direction_ = direction;
}

Strength Current::getStrength() const
{
	return strength_;
}

Direction Current::getDirection() const
{
	return direction_;
}

int Current::random(const int combos) const
{
	std::random_device rd;
	std::mt19937 gen{ rd() };
	std::uniform_int_distribution<int> const rand(0, combos);

	return rand(gen);
}