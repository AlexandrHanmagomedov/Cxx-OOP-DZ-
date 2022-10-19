#pragma once
#include<iostream>
#include<string>
using namespace std;
struct Car {
	string model;
	int year;
	double price;
	double engine;
	Car(string model, int year, double price, double engine) {
		SetYear(year);
		SetPrice(price);
		SetEngine(engine);
	};
	void SetYear(int year) {
		if (year < 1885)
			year = 1885;
		this->year = year;
	};
	void SetModel(string model) {
		this->model = model;
	};
	void SetPrice(double price) {
		if (price < 1)
			price = 1;
		this->price = price;
	};
	void SetEngine(double engine) {
		if (engine < 0.1)
			engine = 0.1;
		this->engine = engine;
	};
	friend ostream& operator<<(ostream& out, const Car& car) {
		cout << "Model: " << car.model 
			 << "\nYear: " << car.year 
			 << "\nEngine: " << car.engine
			 << "\nPrice: " << car.price << endl;
		return out;
	};
};
