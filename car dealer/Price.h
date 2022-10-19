#pragma once
#include"Car.h"
class Price{
	double price;
public:
	Price(double price = 0) :price(price) {}
	bool operator()(const Car& car) {
		return price == car.price;
	}
	bool operator()(const Car& c1, const  Car& c2) {
		return c1.price < c2.price;
	}
};

