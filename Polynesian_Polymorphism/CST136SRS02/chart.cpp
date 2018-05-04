#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include<algorithm>
#include <vector>
#include "chart.h"
using namespace std;



vector<vector<char>> Chart::import_chart(const char* file)
{
	ifstream infile;
	string line;
	vector<vector<char>> mahere;

	infile.open(file);
	if (infile.is_open())
	{
		cout << "File opened\n";

		while (getline(infile, line))
		{
			line.erase(std::remove(line.begin(), line.end(), '\t'), line.end()); // cplusplus forum on removing all tabs
		
			vector<char> temp;

			for (auto i = 0; i < line.length() + 1; i++)
			{
				temp.push_back(line[i]);
			}

			mahere.push_back(temp);
		}

		infile.close();
	}
	else { cout << "Unable to open file\n"; }

	if (infile.is_open())
	{
		cout << "File still opened\n";
	}
	else {
		cout << "File closed\n";
	}
	map = mahere;
	return mahere;
}

void Chart::display_chart(std::vector<std::vector<char>> map) 
{
	for (auto n : map) {
		for (auto const k : n)
		{
			cout << k;
		}
		cout << endl;
	}
}