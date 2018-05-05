#include "stdafx.h"
#include <memory>
#include "sail.h"
#include "paddle.h"
#include "multiHull.h"
#include "sailboat.h"

Sailboat::Sailboat(const Chart& chart) noexcept :
Boat(chart, { new Sail, new Paddle }, std::make_unique<MultiHull>())
{
	
}

std::string Sailboat::getName() const noexcept
{
	return "NS Albi";
}

void Sailboat::setAngle(double angle)
{
	for(const auto& propulsion : propulsions_)
	{
		if(hull_ != nullptr)
		{
			if(propulsion != nullptr)
			{
				const double minWindAngle = propulsion->getMinWindAngle() / hull_->getAddedStability();
				if (std::abs(windDirection_ - angle) < minWindAngle)
				{
					if (angle > windDirection_)
					{
						angle = windDirection_ + minWindAngle;
					}
					else
					{
						angle = windDirection_ - minWindAngle;
					}
				}
			}
		}
		else
		{
			throw std::runtime_error("FATAL: This boat has no hull! (hull_ is nullptr)");
		}
	}
	Boat::setAngle(angle);
}

