#pragma once
#include "Propulsion.h"
class Sail final : public Propulsion
{
public:
	Sail();
	~Sail();

	void getKnots() override;

};

