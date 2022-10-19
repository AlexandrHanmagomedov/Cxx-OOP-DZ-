#include "Pet1.h"
#include<iostream>


Pet::Pet(string type, float weight, float speed, string habitat, string color) :type(type), habitat(habitat), color(color) {
	SetSpeed(speed);
	SetWeight(weight);
}

void Pet::SetWeight(float weight) {
	if (weight < 0)
		weight = 1;
	this->weight = weight;
}

void Pet::SetSpeed(float speed) {
	if (speed < 0)
		speed = 1;
	this->speed = speed;
}

void Pet::SetType(string type) {
	this->type = type;
}

void Pet::SetHabitat(string habitat) {
	this->habitat = habitat;
}

void Pet::SetColor(string color) {
	this->color = color;
}

string Pet::GetType() const
{
	return type;
}

float Pet::GetWeight() const
{
	return weight;
}

float Pet::GetSpeed()const {
	return speed;
}

string Pet::GetHabitat() const
{
	return habitat;
}

string Pet::GetColor() const
{
	return color;
}

void Pet::Say() const {
	cout << "Says something.\n";
}

void Pet::Show() const {
	cout << "Type: " << type << "\nHabitat: " << habitat << "\nColor: " << color << "\nWeight: " << weight <<
		"\nSpeed: " << speed << endl;
}

void Pet::Move() const {
	cout << "Moving with speed " << speed << endl;
}

