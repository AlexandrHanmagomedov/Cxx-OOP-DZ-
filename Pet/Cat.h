#pragma once
#include "Cat.h"
#include "Pet1.h"
class Cat : public Pet {
	float jump;
public:
	Cat(string type, float weight, float speed, string habitat, string color, float jump);
	void SetJump(float jump);
	void Show()const;
	void Say()const;


	float GetJump()const;
};

