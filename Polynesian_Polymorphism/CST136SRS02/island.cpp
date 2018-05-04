#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include<algorithm>
#include <vector>
using namespace std;


vector<vector<char>> import_island(const char* file)
{
	ifstream infile;
	string line;
	vector<vector<char>> island;

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

			island.push_back(temp);
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

	return island;
}

void display_island(vector<vector<char>> island) {
	for (auto n : island) {
		for (char const k : n)
		{
			cout << k;
		}
		cout << endl;
	}
}