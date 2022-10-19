#include "Sparrow.h"

Sparrow::Sparrow(string type, float weight, float speed, string habitat, string color, float flyHeight) :Pet(type, weight, speed, habitat, color) {
	SetFlyHeight(flyHeight);
}

void Sparrow::SetFlyHeight(float flyHeight) {
	if (flyHeight < 0)
		flyHeight = 1;
	this->flyHeight = flyHeight;
}

void Sparrow::Show() const {
	Pet::Show();
	cout << "Fly height: " << flyHeight << endl;
}

void Sparrow::Say() const {
	cout << "*Opa chirik*\n";
}

void Sparrow::Fly() const {
	cout << "Flying at " << flyHeight << endl;
}

float Sparrow::GetFlyHeight() const {
	return flyHeight;
}


