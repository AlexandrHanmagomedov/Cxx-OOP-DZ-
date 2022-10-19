#include "Binary.h"

void Binary::Display(string path) const {
	ifstream fin(path);
	bool isOpen = fin.is_open();
	if (isOpen == false) {
		cout << "The file couldn't be opened.\n";
		return;
	}
	char symb;
	int num, countBits = 0;
	string res;
	while (fin.get(symb)) {
		if (symb == 32)
			cout << " ";
		num = symb;
		while (num > 0) {
			(num % 2 == 0) ? (res += "0") : (res += "1");
			countBits++;
			num /= 2;
		}
		while (countBits < 8) {
			res += "0";
			countBits++;
		}
		reverse(res.begin(), res.end());

		cout << res;
		if (symb == 32)
			cout << " ";
		if (symb == 10)
			cout << endl;
		countBits = 0;
		res = "";

	}
	cout << endl;
	fin.close();
}
