
#include <iostream>
#include <string.h>
#include <time.h>
#include "Printer.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Printer printing(25);//создание очереди
	for (int i = 0; i < 5; i++) { //заполнение части элементов
		printing.AddPrinting(rand() % 100, rand() % 11); // значения от 0 до 99 (включительно) и приоритет от 0 до 11 (включительно)
	}
	printing.Show(); // //показ текущей очереди
	printing.Extract(); //извлечение элемента
	printing.Show();

}

