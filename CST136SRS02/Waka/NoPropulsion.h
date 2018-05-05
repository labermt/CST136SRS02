#pragma once
#include "Propulsion.h"
class NoPropulsion final : public Propulsion
{
public:
	NoPropulsion();

	void getKnots() override;
};

