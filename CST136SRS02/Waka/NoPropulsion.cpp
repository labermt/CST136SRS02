#include "stdafx.h"
#include "NoPropulsion.h"


NoPropulsion::NoPropulsion()
	:Propulsion(0)
{
}

void NoPropulsion::getKnots()
{
	Propulsion::getKnots();
}
