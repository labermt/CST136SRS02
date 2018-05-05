#pragma once

class Boat;

class Chart
{
private:
	static constexpr double majorAxis{ 800.0 }; // half of the length of New Zealand; km
	static constexpr double minorAxis{ 200.0 }; //  half of the width of New Zealand; km

	double x_;
	double y_;

public:
	Chart() noexcept;
	void move(double distance, double radians) noexcept;
	double getPathAtAngle(double radians) const noexcept;
	double getBoatAngle() const noexcept;
	double angleToPosition(double x, double y) const noexcept;
	void checkPath(double radians, const Boat& boat) const;

public:
	double getX() const noexcept;
	double getY() const noexcept;
};