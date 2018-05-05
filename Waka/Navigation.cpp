#include "stdafx.h"

#include "gsl.h"

#include "Navigation.h"


Navigation::Navigation(const int lat, const int lng) :
	lat_(lat), lng_(lng)
{}

void Navigation::set(const int lat, const int lng)
{
	lat_ = lat;
	lng_ = lng;
}

int Navigation::getlat() const
{
	return lat_;
}

int Navigation::getlng() const
{
	return lng_;
}

void Navigation::move(const int direction, const unsigned distance)
{
	switch (distance)
	{
	case 0:
		break;

	case 1:
	{
		const auto cardinal = Navigation::compRose(direction);

		switch (cardinal)
		{
		case kNorth:
			--lat_;
			break;

		case kEast:
			++lng_;
			break;

		case kSouth:
			++lat_;
			break;

		case kWest:
			--lng_;
			break;
		}
	}
	break;
	}
}

Direction Navigation::compRose(const int direction)
{
	auto result{ kNorth };

	const auto theta = rangeTheta(direction);

	Expects(theta >= 0 && theta <= 360);

	if (theta <= 135 && theta > 45)
	{
		result = kNorth;
	}
	else if (theta <= 45 && theta > 315)
	{
		result = kEast;
	}
	else if (theta <= 315 && theta > 225)
	{
		result = kSouth;
	}
	else if (theta <= 225 && theta > 135)
	{
		result = kWest;
	}

	return result;
}

int Navigation::theta(const int x, const int y)
{
	int result = 0;
	if (x == 0)
	{
		if (y < 0)
		{
			result = 90;
		}
	}
	else
	{
		constexpr auto kPi{ 3.14159265358979323846 };

		result = std::lround(atan(1.0 * y / x) * 180.0 / kPi);
		if (x < 0)
		{
			result += 180;
		}
		else if (y < 0)
		{
			result += 360;
		}
	}

	return result;
}
int Navigation::rangeTheta(const int theta)
{
	const auto result{ (360 * (1 - theta / 360) + theta) % 360 };

	return result;
}