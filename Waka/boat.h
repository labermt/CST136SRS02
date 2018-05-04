#pragma once
#include <string>
#include <vector>
#include "Propulsion.h"
#include "chart.h"
#include "hull.h"
#include "direction.h"

class Boat
{
	//virtual void do_move();
	virtual void do_turn(Direction directon);
	virtual std::string do_get_name() = 0;

protected:

	enum class ship_status { capsized, good };

	std::string name_;
	Hull& hull_;
	Chart& chart_;
	std::vector<Propulsion> propultion_;
	ship_status status_{ ship_status::good };
	Direction heading_{ Direction::north };
	

public:
	void start_voyage();
	Boat(std::string name, Hull& hull_type, std::vector<Propulsion>& prop, Chart& chart);
	void move();
	void turn( Direction directon);
	

	std::string get_name();

	virtual ~Boat() = default;
};
