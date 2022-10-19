


#include <iostream>
#include <string>
#include <fstream>

#include "Header.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	string filestart;
	string fileend;
	ifstream start;
	ofstream end;
	start.open("Test.cpp");
	end.open("ResultTest1.cpp");

	DeleteCommit(start, end);


}

