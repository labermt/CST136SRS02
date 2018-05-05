#pragma once
#include "boat.h"
#include "monohull.h"
#include "paddle.h"



class canoe :
	public boat
{
private:
	virtual string do_getName();
	canoe();
	boat singleHull;
	paddle twoPaddles;
public:
	
};

