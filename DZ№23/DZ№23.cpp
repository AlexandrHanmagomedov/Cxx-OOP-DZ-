#include "Header.h"



int main()
{
	setlocale(LC_ALL, "");
	int number;
	for (;;) {
		cout << "\nEnter the number of the DZ (1,2,3) \n";
		//cout << "\nAvailable projects: 1, 2, 3\n";
		cin >> number;
		switch (number) {
		case 1: {
			Zad1 zad1;
			zad1.main();
			break;
		}
		case 2: {
			Zad2 zad2;
			zad2.main();
			break;
		}
		case 3: {
			Zad3 zad3;
			zad3.main();
			break;
		}
		default:
			cout << "\nWrong input\n";
			break;
		}
	}
}
