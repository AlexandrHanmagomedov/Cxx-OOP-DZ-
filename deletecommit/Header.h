#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void DeleteCommit(ifstream& start, ofstream& end) {
	string line;
	bool found = false;
	int i = 0;

	while (!start.eof()) {
		getline(start, line);

		if (line.find("/*") < line.length())
			found = true;
		if (!found) {
			for (int i = 0; i < line.length(); i++)
			{
				if (i < line.length()) {
					if ((line.at(i) == '/') && (line.at(i + 1) == '/')) {
						break;
					}
					else
						end << line[i];
				}
			}

			end << endl;

		}
		if (found)
		{
			if (line.find("*/") < line.length())
				found = false;
		}
	}
}