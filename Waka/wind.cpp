#include "stdafx.h"
#include "wind.h"

const compass::orientation Wind::getDirection()
{
	return direction_;
}

const int Wind::getStrength()
{
	return strength_;
}
