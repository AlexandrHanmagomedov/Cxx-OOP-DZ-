#pragma once
#include "Header.h"
using namespace std;
class Project21_1 {
public:
	void main()
	{
		cout << "\nЗадание 1. Добавьте в класс двусвязного списка механизм обработки исключений.На ваш выбор генерируйте исключения\n";
		cout << "в случае ошибок.Например, нехватка памяти, попытка\n";
		cout << "удаления из пустого списка и т.д.\n\n";
		List <int> L;
		const int n = 10;
		int a[n] = { 0,1,2,3,4,5,6,7,8,9 };
		//Проверка пустого листа
		L.Print();
		for (int i = 0; i < n; i++)
			if (i % 2 == 0)
				L.AddHead(a[i]);
			else
				L.AddTail(a[i]);

		cout << "List L:\n";
		L.Print();
		cout << "\n\n";
		//Проверка несуществующей позиции
		L.Print(11);
		cout << "List L:\n";
		L.Print();
		L.Print(2);
		L.Print(8);
		List <int> T;
		T = L;
		cout << "List T:\n";
		T.Print();
		cout << "List Sum:\n";
		List <int> Sum = -L + T;
		Sum.Print();
	}
};
