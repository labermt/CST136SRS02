// main.cpp : Defines the entry point for the console application
//

#include "stdafx.h"
#include "monohull.h"
#include "multihull.h"
#include "raft.h"

int main()
{
	MultiHull const testHull;

	auto myRaft = Raft(testHull);

	auto testHeight = testHull.getMaxWaveHeight();

	myRaft.hull_.getMaxWaveHeight();


	return 0;
}