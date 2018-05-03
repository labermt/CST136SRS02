// main.cpp : Defines the entry point for the console application
//

#include "stdafx.h"
#include "monohull.h"
#include "multihull.h"
#include "raft.h"

int main()
{
	auto myRaft = Raft(MonoHull());

	MultiHull testHull;

	return 0;
}