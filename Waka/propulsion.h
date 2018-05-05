#pragma once

class Propulsion
{
public:
	Propulsion(const double minWindAngle) noexcept;
	Propulsion(const Propulsion&) = default;
	Propulsion(Propulsion&&) = default;
	Propulsion& operator=(const Propulsion&) = delete;
	Propulsion& operator=(Propulsion&&) = delete;

protected:
	const double minWindAngle_;
	virtual double getKnots() const = 0;

public:
	virtual ~Propulsion() = default;

	double doGetKnots() const; // 'x' and 'doX' naming convention flipped to match spec
	double getMinWindAngle() const noexcept;
};