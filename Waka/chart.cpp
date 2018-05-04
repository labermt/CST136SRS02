#include "stdafx.h"
#include "chart.h"

Chart::Chart(int lat, int lng, orientation facing) : lat_(lat), lng_(lng), dirrection(facing)
{ }

const int Chart::getlat()
{
	return lat_;
}

const int Chart::getlng()
{
	return lng_;
}

Chart::orientation Chart::getdirrection()
{
	return dirrection;
}

void Chart::setlat(const int data)
{

}

void Chart::setlng(const int data)
{
}

void Chart::setdirrection()
{
}
