#pragma once
#include "Car.h"
class Model{
	string model;
public:
	Model(string model = "") :model(model) {}
	bool operator()(const Car& c1, const Car& c2) {
		return c1.model < c2.model;
	}
	bool operator()(const Car& car) {
		return car.model == model;
	}

};

