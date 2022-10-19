#include "FileReader.h"

void FileReader::Display(string path) const {
	ifstream fin(path);
	bool isOpen = fin.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	string line;
	while (getline(fin, line)) {
		cout << line << endl;
	}
	fin.close();
}


