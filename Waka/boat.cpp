#include "stdafx.h"
#include "boat.h"

void Boat::getName() noexcept
{
	doGetName();
}

Boat::Boat(Hull const & hull):
hull_{hull}
{
}

void Boat::doGetName() noexcept
{
}
