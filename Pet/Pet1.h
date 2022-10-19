#pragma once
#include<iostream>
#include<string>
using namespace std;

class Pet {
	string type;
	float weight;
	float speed;
	string habitat;
	string color;
public:
	Pet(string type, float weight, float speed, string habitat, string color);
	void SetWeight(float weight);
	void SetSpeed(float speed);
	void SetType(string type);
	void SetHabitat(string habitat);
	void SetColor(string color);

	string GetType()const;
	float GetWeight()const;
	float GetSpeed()const;
	string GetHabitat()const;
	string GetColor()const;

	void Say()const;
	void Show()const;
	void Move()const;

};

