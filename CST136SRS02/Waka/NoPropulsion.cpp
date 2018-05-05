#include "stdafx.h"
#include "NoPropulsion.h"


NoPropulsion::NoPropulsion()
	:Propulsion(1)
{
}

void NoPropulsion::getKnots()
{
	Propulsion::getKnots();
}
