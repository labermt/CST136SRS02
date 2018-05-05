#pragma once
#include "stdafx.h"
#include <string>
#include <vector>
#include "Propulsion.h"
#include "chart.h"
#include "hull.h"
#include "direction.h"
#include "gps.h"
#include "mono_hull.h"

class Boat
{
	//virtual void do_move();
	//virtual void do_turn(Direction directon);
	virtual std::string do_get_name() = 0;

protected:

	enum class ship_status { capsized, good };

	std::string name_;
	Hull const& hull_;
	std::vector<Propulsion*>& propulsion_;
	Chart& chart_;
	ship_status status_{ ship_status::good };
	Direction heading_{ Direction::north };
	GPS location_{GPS (10,4)};
	

public:
	void start_voyage();
	Boat(std::string name, Hull const& hull_type, std::vector<Propulsion*>& prop, Chart& chart);
	void move();
	void turn( Direction directon);
	Hull::turn_radius get_turn_radius();
	Hull::max_wave_height get_max_wave_height();
	int get_knots();
	

	std::string get_name();

	virtual ~Boat() = default;
};
