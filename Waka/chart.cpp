#include "stdafx.h"
#include "chart.h"

Chart::Chart(int lat, int lng) : lat_(lat), lng_(lng)
{ }

const int Chart::getlat()
{
	return lat_;
}

const int Chart::getlng()
{
	return lng_;
}

void Chart::setlat(const int data)
{
	lat_ += data;
}

void Chart::setlng(const int data)
{
	lng_ += data;
}

void Chart::hitauckland()
{
	auckland_ = true;
}

void Chart::hitwellington()
{
	wellington_ = true;
}

void Chart::hitstewardIsland()
{
	stewardIsland_ = true;
}

void Chart::hitnelson()
{
	nelson_ = true;
}
