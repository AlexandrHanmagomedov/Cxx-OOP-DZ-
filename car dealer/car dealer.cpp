#include<iostream>
//#include"CarShowroom.h"
#include "Dealer.h"
using namespace std;

int main() {
	CarShowroom cs1;
	cs1.AddCar(Car("Audi", 2010, 12000, 2.5));
	cs1.AddCar(Car("BMW", 1998, 25000, 0.9));
	cs1.AddCar(Car("Jaguar", 1999, 40000, 3.5));
	cs1.AddCar(Car("Jiguli", 2017, 170000, 3.8));
	cs1.Show();
	cout << "\nSearch by engine:\n";
	cs1.SearchByEngine(2.5);
	cout << "\nSearch by model:\n";
	cs1.SearchByModel("Audi");
	cout << "\nSearch by price:\n";;
	cs1.SearchByPrice(40000);
	cout << "\nSearch by year:\n";
	cs1.SearchByYear(2017);
	cout << "\nSort by model:\n";
	cs1.SortByModel();
	cs1.Show();
	cout << "\nSort by engine:\n";
	cs1.SortByEngine();
	cs1.Show();
	cout << "\nSort by price:\n";
	cs1.SortByPrice();
	cs1.Show();
	cout << "\nSort by year:\n";
	cs1.SortByYear();
	cs1.Show();
	cout << endl;
	cs1.IsCorrectYear();
	cout << endl;
	cs1.PriceCarsLess5();
	cout << endl;
	cs1.PriceMore100000();
	cout << "\nReduce price:\n";
	cs1.PriceReduction();
	cs1.Show();
	cs1.EngineLess1();
	cout << "\nRemove all cars produced before 2000:\n";
	cs1.Remove();
	cs1.Show();
	
}