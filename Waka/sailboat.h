#pragma once
#include "boat.h"

class Sailboat final : public Boat
{
public:
	Sailboat() = default;

public:
	void do_get_name() override;
};

