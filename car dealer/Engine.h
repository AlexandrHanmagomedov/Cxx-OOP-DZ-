#pragma once
#include "Car.h"
class Engine {
	double engine;
public:
	Engine(double engine = 0) :engine(engine) {}
	bool operator()(const Car& c1, const Car& c2) {
		return c1.engine < c2.engine;
	}
	bool operator()(const Car& car) {
		return engine == car.engine;
	}
};


