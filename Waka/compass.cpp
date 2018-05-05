#include "stdafx.h"
#include "compass.h"

compass::orientation compass::getdirrection()
{
	return dirrection_;
}

void compass::setdirrection(const orientation data)
{
	dirrection_ = data;
}

const int compass::dirrectionToInt(orientation d0)
{
	switch(d0)
	{
	case orientation::north:
		return 0;
		break;
	case orientation::ne:
		return 1;
		break;
	case orientation::east:
		return 2;
		break;
	case orientation::se:
		return 3;
		break;
	case orientation::south:
		return 4;
		break;
	case orientation::sw:
		return 5;
		break;
	case orientation::west:
		return 6;
		break;
	case orientation::nw:
		return 7;
		break;
	default:
		return 0;
	}
}

const compass::orientation compass::intToDirrection(int d0)
{
	d0 %= 8;

	switch (d0)
	{
	case 0:
		return orientation::north;
		break;
	case 1:
		return orientation::ne;
		break;
	case 2:
		return orientation::east;
		break;
	case 3:
		return orientation::se;
		break;
	case 4:
		return orientation::south;
		break;
	case 5:
		return orientation::sw;
		break;
	case 6:
		return orientation::west;
		break;
	case 7:
		return orientation::nw;
		break;
	default:
		return orientation::north;
	}
}
