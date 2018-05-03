#pragma once
#include "boat.h"

class Canoe final : public Boat
{
public:
	Canoe() = default;

private:
	void doGetName() noexcept override;
};

