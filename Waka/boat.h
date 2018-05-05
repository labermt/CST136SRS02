#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
#include "Propulsion.h"
#include "chart.h"
#include "hull.h"
#include "direction.h"
#include "gps.h"

class Boat
{
	

protected:

	enum class ship_status { capsized, good };

	std::string name_;
	Hull const& hull_;
	std::vector<Propulsion*>& propulsion_;
	Chart& chart_;

	ship_status status_{ ship_status::good };
	Direction heading_{ Direction::north };
	GPS location_{GPS (10,4)};

	virtual std::string do_get_name() =0;

public:
	void start_voyage();
	Boat(std::string name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart);
	void move();
	void turn( Direction directon);
	Hull::turn_radius get_turn_radius() const;
	Hull::max_wave_height get_max_wave_height() const;
	int get_knots();
	

	std::string get_name();
};
