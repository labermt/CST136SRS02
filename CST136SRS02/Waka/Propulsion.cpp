#include "stdafx.h"
#include "Propulsion.h"


Propulsion::Propulsion(const int knotSpeed)
{
	knots = knotSpeed;
}

void Propulsion::getKnots()
{

}

int Propulsion::currentKnots() const
{
	return knots;
}
