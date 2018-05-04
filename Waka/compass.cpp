#include "stdafx.h"
#include "compass.h"

compass::orientation compass::getdirrection()
{
	return dirrection_;
}

void compass::setdirrection(orientation data)
{
	dirrection_ = data;
}