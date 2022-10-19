#pragma once
#include "Car.h"
//#include"Model.h"
class Year{
	int year;
public:
	Year(int year = 0) :year(year) {}
	bool operator()(const Car& car) {
		return year == car.year;
	}
	bool operator()(const Car& c1, const Car& c2) {
		return c1.year < c2.year;
	}
};

