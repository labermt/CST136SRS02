// main.cpp : Defines the entry point for the console application
//

#include "stdafx.h"
#include "monohull.h"
#include "multihull.h"
#include "raft.h"
#include "propulsion.h"
#include "paddle.h"

int main()
{
	MultiHull const testHull;
	Chart testChart;

	std::vector<Propulsion*> testPropulsion;
	Paddle testPaddle;
	testPropulsion.push_back(&testPaddle);

	auto testRaft = Raft(testHull, testChart, testPropulsion);

	auto testName = testRaft.getName();

	testRaft.Voyage();

	return 0;
}
