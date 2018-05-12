#include "stdafx.h"
#include "chart.h"

Chart::Chart(int lat, int lng) : lat_(lat), lng_(lng)
{ }

int Chart::getlat() const
{
	return lat_;
}

int Chart::getlng() const
{
	return lng_;
}

void Chart::setlat(const int data)
{
	lat_ += data;

	if (getlat() == 2 && getlng() == 4)
	{
		hitauckland();
	}
	else if (getlat() == 4 && getlng() == 5)
	{
		hitnelson();
	}
	else if (getlat() == 8 && getlng() == 2)
	{
		hitstewardIsland();
	}
	else if (getlat() == 4 && getlng() == 3)
	{
		hitwellington();
	}
}

void Chart::setlng(const int data)
{
	lng_ += data;

	if (getlat() == 2 && getlng() == 4)
	{
		hitauckland();
	}
	else if (getlat() == 4 && getlng() == 5)
	{
		hitnelson();
	}
	else if (getlat() == 8 && getlng() == 2)
	{
		hitstewardIsland();
	}
	else if (getlat() == 4 && getlng() == 3)
	{
		hitwellington();
	}
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