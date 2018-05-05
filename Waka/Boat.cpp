#include "stdafx.h"

#include "Boat.h"

Boat::Boat(std::string name, Propulsion& prop, Hull& hull):
name_(name), prop_(prop), hull_(hull)
{}

std::string Boat::getName() noexcept
{
	return doGetName();
}

Hull & Boat::getHull() const noexcept
{
	return hull_; //return turnRadius? or waveHeight?
}

Propulsion & Boat::getProp() const noexcept
{
	return prop_; //return speed?
}

std::string Boat::doGetName() noexcept
{
	return name_;
}

void Boat::setNav(Navigation & nav)
{
	nav_ = &nav;
}

Direction Boat::getDirection(const Turn turn)
{
	auto theta{ 0 };

	switch (turn)
	{
	case Turn::k0:
	case Turn::kForward:
		theta = 0;
		break;

	case Turn::kLeft:
		theta = -90;
		break;

	case Turn::kRight:
		theta = +90;
		break;
	}

	const auto result{ Navigation::compRose(theta) };

	return result;
}

void Boat::beginVoyage()
{
}

Navigation * Boat::getNav() const
{
	return nav_;
}

void Boat::incrementTime(const unsigned minutes)
{
	auto min = minutes;

	if (prop_.getSpeed() == kFast)
	{
		min *= 2;
	}

	if (prop_.getSpeed() == kModerate)
	{
		min *= 3;
	}

	if (prop_.getSpeed() == kSlow)
	{
		min *= 4;
	}

	elapsedTime_ += min;	
}

unsigned Boat::getElapsedTime() const
{
	return elapsedTime_;
}

Direction Boat::getHeading(const Turn turn) const
{
	const auto result{ Navigation::compRose(heading_ + getDirection(turn)) };

	return result;
}

Direction Boat::getHeading() const
{
	const auto result{ getHeading(Turn::kForward) };

	return result;
}

void Boat::move()
{
	incrementTime(20);
	if (nav_ != nullptr)
	{
		const Chart::Feature feature{ look(Turn::kForward) };
		if (!Chart::isKnown(feature))
		{
			nav_->move(heading_, 1);
		}
	}
}

void Boat::turn(const Turn turn)
{
	heading_ = getHeading(turn);
}
