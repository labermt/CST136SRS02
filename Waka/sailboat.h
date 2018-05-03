#pragma once
#include "boat.h"

class Sailboat final : public Boat
{
public:
	Sailboat() = default;

public:
	void doGetName() noexcept override;
};

