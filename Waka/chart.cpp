#include "stdafx.h"
#include <cmath>
#include <sstream>
#include "boat.h"
#include "pi.h"
#include "chart.h"

Chart::Chart() noexcept:
x_{ majorAxis * std::cos(3.0 * pi / 8.0) },
y_{ majorAxis * std::sin(3.0 * pi / 8.0) }
{
	
}

// This function will move the boat some distance in a given direction.
void Chart::move(const double distance, const double radians) noexcept
{
	x_ += distance * std::cos(radians);
	y_ += distance * std::sin(radians);
}

// This function will return the distance from the center of New Zealand that the boat should theoretically be at a given angle.
double Chart::getPathAtAngle(const double radians) const noexcept
{
	const auto cosine = std::cos(radians + pi / 8.0);
	const auto sine = std::sin(radians + pi / 8.0);
	const auto path = (majorAxis * minorAxis) / std::sqrt((majorAxis * majorAxis * cosine * cosine) + (minorAxis * minorAxis * sine * sine));
	return path;
}

// This function will return the angle between the boat and the center of New Zealand.
double Chart::getBoatAngle() const noexcept
{
	double ret = std::atan2(y_, x_);
	if(ret < 0)
	{
		ret += 2 * pi;
	}
	return ret;
}

// This function will return the angle between the boat and a given location.
double Chart::angleToPosition(const double x, const double y) const noexcept
{
	const auto deltaX = x - x_;
	const auto deltaY = y - y_;
	return std::atan2(deltaY, deltaX);
}

// This function will ensure that the boat hasn't crashed into New Zealand or meandered into the middle of the Pacific.
void Chart::checkPath(const double radians, const Boat& boat) const
{
	const auto path{ getPathAtAngle(radians) };
	const auto distanceFromCenter = std::sqrt(x_ * x_ + y_ * y_);

	if(distanceFromCenter < path * 0.75) // Assumed to be the size of New Zealand
	{
		std::stringstream stream;
		stream << "The " << boat.doGetName() << " has crashed into New Zealand's beautiful shores!";
		throw std::runtime_error(stream.str());
	}
	if (distanceFromCenter > path * 1.5) // Assumed to be too far to get back
	{
		std::stringstream stream;
		stream << "The " << boat.doGetName() << " has been lost at sea!";
		throw std::runtime_error(stream.str());
	}
}

double Chart::getX() const noexcept
{
	return x_;
}

double Chart::getY() const noexcept
{
	return y_;
}


