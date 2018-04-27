#pragma once
#include "Hull.h"
class MonoHull :
	public Hull
{
public:
	/**
	 * \ default constructor
	 */
	MonoHull();
	/**
	 * \brief 
	 */
	virtual ~MonoHull();


	float minTurnRadius();
	float maxWaveHeight();

};

