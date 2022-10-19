#include "Cat.h"

Cat::Cat(string type, float weight, float speed, string habitat, string color, float jump) :Pet(type, weight, speed, habitat, color) {
	SetJump(jump);
}

void Cat::SetJump(float jump) {
	if (jump < 0)
		jump = 1;
	this->jump = jump;
}

void Cat::Show() const {
	Pet::Show();
	cout << "Jump: " << jump << endl;
}

void Cat::Say() const {
	cout << "*Meow*\n";
}

float Cat::GetJump() const {
	return jump;
}



