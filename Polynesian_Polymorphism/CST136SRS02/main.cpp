// CST136SRS02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "island.h"

int main()
{
	auto const zealand = import_island("new_zealand.txt");
	display_island(zealand);



	return 0;
}

