// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "monohull.h"
#include "multihull.h"
#include "boat.h"
#include "raft.h"


int main()
{
	MonoHull test;

	auto myRaft = Raft(test);

	MultiHull test2;

    return 0;
}

