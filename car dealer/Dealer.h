#pragma once
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include"Car.h"
#include"Model.h"
#include"Price.h"
#include"Year.h"
#include"Engine.h"
using namespace std;
//class Dealer
class CarShowroom {//dealer
	vector<Car>cars;
public:
	void AddCar(const Car& car) {
		cars.push_back(car);
	};
	/*void CarShowroom::AddCar(const Car& car) {
		cars.push_back(car);
	}*/
	void Show()const {
		for_each(cars.begin(), cars.end(),
			[](const Car& car) {cout << car << endl; });
	};
	void SearchByModel(string model) {
		auto res = find_if(cars.begin(), cars.end(), Model(model));
		if (res != cars.end()) {
			cout << *res;
		}
		else {
			cout << "Not found car with entered model.\n";
		}
	};
	void SearchByYear(int year) {
		auto res = find_if(cars.begin(), cars.end(), Year(year));
		if (res != cars.end()) {
			cout << *res;
		}
		else {
			cout << "Not found car with entered year.\n";
		}
	};
	void SearchByPrice(double price) {
		auto res = find_if(cars.begin(), cars.end(), Price(price));
		if (res != cars.end()) {
			cout << *res;
		}
		else {
			cout << "Not found car with entered price.\n";
		}
	};
	void SearchByEngine(double engine) {
		auto res = find_if(cars.begin(), cars.end(), Engine(engine));
		if (res != cars.end()) {
			cout << *res;
		}
		else {
			cout << "Not found car with entered engine.\n";
		}
	};

	void SortByModel() {
		sort(cars.begin(), cars.end(), Model());
	};
	void SortByYear() {
		sort(cars.begin(), cars.end(), Year());
	};
	void SortByPrice() {
		sort(cars.begin(), cars.end(), Price());
	};
	void SortByEngine(){
		sort(cars.begin(), cars.end(), Engine());
	};
	void Remove() {
		auto newEnd = remove_if(cars.begin(), cars.end(), 
				[](const Car& car) {return car.year < 2000; });
			cars.erase(newEnd, cars.end());
	};
	void IsCorrectYear()const {
		if (all_of(cars.begin(), cars.end(), [](const Car& car) 
				{return car.year >= 1885 && car.year <= 2020; })) {
			cout << "All cars have correct year.\n";
		}
		else {
			cout << "Not all cars have correct year.\n";
		}
	};
	void PriceMore100000()const {
		if (any_of(cars.begin(), cars.end(), [](const Car& car) 
				{return car.price > 100000; })) {
			cout << "There is a car more expensive than 100,000.\n";
		}
		else {
			cout << "There are no cars more expensive than 1000.\n";
		}
	};
	void EngineLess1()const {
		if (none_of(cars.begin(), cars.end(), [](const Car& car)
				{return car.engine < 1.0; })) {
			cout << "There are no cars more expensive with engine less than 1.0.\n";
		}
		else {
			cout << "Car with engine less 1.0 is present.\n";
		}
	};
	void PriceCarsLess5()const {
		double sum = 0.0;
		for_each(cars.begin(), cars.end(), [&sum](const Car& car) 
				{if (car.year > 2015) sum += car.price; });
		cout << "Price of cars produced less than 5 years ago: " 
			<< sum << ".\n";
	
	};
	void PriceReduction() {
		for_each(cars.begin(), cars.end(), [](Car& car) 
			{if (car.year < 2006)car.price -= car.price * 0.2; });
	};
	
};

