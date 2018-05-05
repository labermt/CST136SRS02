#pragma once
#include "Propulsion.h"
class Sail final : public Propulsion
{
public:
	Sail();

	void getKnots() override;

};

