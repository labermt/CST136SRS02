#include "stdafx.h"
#include "pi.h"
#include "boat.h"


enum class Quadrant {kNorthEast, kSouthEast, kSouthWest, kNorthWest};

Boat::Boat(const Chart& chart, const std::vector<PropulsionPtr>& propulsions, std::unique_ptr<Hull>&& hull) noexcept :
daysPassed_{ 0 },
angle_{ -pi },
chart_{ chart },
propulsions_{ propulsions },
hull_{ std::move(hull) },
windDirection_{ 0 }
{
	
}

Boat::~Boat()
{
	for (const auto propulsion : propulsions_)
	{
		delete propulsion;
	}
}

void Boat::setAngle(const double angle)
{
	if (hull_ != nullptr)
	{
		const auto delta = angle_ - angle;
		const auto movement = 2 * hull_->getMinTurnRadius() * std::sin(delta / 2.0);
		const auto moveAngle = angle_ + delta / 2;
		chart_.move(movement, moveAngle);
	}
	else
	{
		throw std::runtime_error("FATAL: This boat has no hull! (hull_ is nullptr)");
	}
	angle_ = angle;
}

void Boat::checkIfCapsized(const Water& water, const Wind& wind) const
{
	if(hull_ == nullptr)
	{
		throw std::runtime_error("FATAL: This boat has no hull! (hull_ is nullptr)");
	}
	if (water.getWaveHeight() >= hull_->getMaxWaveHeight()) // Note: Inaccessable if hull_ is nullptr, hence the lack of checking again
	{
		throw std::runtime_error("The waves were too high! The " + getName() + " has been claimed by the briny deep!");
	}

	for(const auto& propulsion : propulsions_)
	{
		if (propulsion != nullptr && std::abs(wind.getAngle() - angle_) < propulsion->getMinWindAngle() / hull_->getAddedStability())
		{
			throw std::runtime_error("The " + getName() + " has capsized in the intense winds!");
		}
	}
}

std::string Boat::doGetName() const noexcept
{
	return getName();
}

void Boat::testVoyage(Wind& wind, Water& water)
{
	daysPassed_ = 0;
	auto curQuadrant = Quadrant::kNorthWest;
	while(curQuadrant != Quadrant::kNorthEast || chart_.getBoatAngle() - (3.0 * pi / 8.0) > pi / 16.0)
	{
		wind.updateWind();
		water.updateWater();
		windDirection_ = wind.getAngle();

		for (const auto& propulsion : propulsions_)
		{
			if(propulsion != nullptr)
			{
				const auto desiredAngle = chart_.getBoatAngle() + (24 * propulsion->doGetKnots() / chart_.getPathAtAngle(chart_.getBoatAngle()));
				const auto destDir = chart_.getPathAtAngle(desiredAngle);
				const auto angleToPosition = chart_.angleToPosition(destDir * std::cos(desiredAngle), destDir * std::sin(desiredAngle));
				setAngle(angleToPosition);
			
				chart_.move(propulsion->doGetKnots() * kmPerKnot, angleToPosition);
			}
		}
		

		chart_.move(wind.getMagnitude() * 0.05 * kmPerKnot, wind.getAngle());
		chart_.move(water.getMagnitude() * 0.05 * kmPerKnot, water.getAngle());

		if (curQuadrant == Quadrant::kNorthWest && chart_.getBoatAngle() > 7.0 * pi / 8.0)
		{
			curQuadrant = Quadrant::kSouthWest;
		} 
		else if (curQuadrant == Quadrant::kSouthWest && chart_.getBoatAngle() > 11.0 * pi / 8.0)
		{
			curQuadrant = Quadrant::kSouthEast;
		}
		else if (curQuadrant == Quadrant::kSouthEast && chart_.getBoatAngle() > 15.0 * pi / 8.0)
		{
			curQuadrant = Quadrant::kNorthEast;
		}

		daysPassed_++;
		chart_.checkPath(chart_.getBoatAngle(), *this);
		checkIfCapsized(water, wind);
	}
}

int Boat::getDaysPassed() const noexcept
{
	return daysPassed_;
}

