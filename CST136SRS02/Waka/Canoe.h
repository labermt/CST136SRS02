#pragma once
#include "Boat.h"
class Canoe final : public Boat
{
public:
	Canoe();
	~Canoe();
	void getName() override;
};

