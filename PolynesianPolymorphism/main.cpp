// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "raft.h"

int main()
{
	Raft raft;
	Boat& boat = raft;
	std::cout << raft.getName() << " " << boat.getName() << std::endl;
    return 0;
}

