#pragma once
#include <string>
#include "Boat.h"

using namespace std;


class Hull :
	public Boat
{
public:
	Hull();
	virtual ~Hull();

	void getName();

};

