#pragma once

class Propulsion
{

protected:
	virtual ~Propulsion() = default;

private:
	virtual unsigned doGetKnots() const noexcept = 0;

public:
	unsigned getKnots() const noexcept { return doGetKnots(); };
};
