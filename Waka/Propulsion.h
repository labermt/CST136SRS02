#pragma once

class Propulsion
{
public:
	enum class propulsion_type { paddle = 1, sail = 2 };

protected:
	virtual propulsion_type do_get_knots() = 0;
	
public:
	virtual ~Propulsion() = default;
	propulsion_type get_knots();
	
};
