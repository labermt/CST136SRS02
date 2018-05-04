#pragma once

#include <vector>

class Chart
{
public:
	std::vector<std::vector<char>> map;
	int lon;
	int lat;

public:
	std::vector<std::vector<char>> import_chart(const char*);
	static void display_chart(std::vector<std::vector<char>>);

	
};