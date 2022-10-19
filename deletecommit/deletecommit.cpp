// DeleteCommentsCpp28.06.2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
//#include"DeleteCommit.h"
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

	start.close();
	end.close();

	return 0;

}
