#include "ASCII.h"

void ASCII::Display(string path) const {
	ifstream fin(path);
	bool isOpen = fin.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	char symb;
	while (fin.get(symb)) {
		if (symb == 32)
			cout << " ";
		cout << int(symb);
		if (symb == 32)
			cout << " ";
		if (symb == 10)
			cout << endl;
	}
	cout << endl;
	fin.close();
}
