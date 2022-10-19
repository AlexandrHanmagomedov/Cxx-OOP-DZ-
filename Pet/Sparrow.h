#pragma once

#include "Pet1.h"
class Sparrow : public Pet {
	float flyHeight;
public:
	Sparrow(string type, float weight, float speed, string habitat, string color, float flyHeight);
	void SetFlyHeight(float flyHeight);
	void Show()const;
	void Say()const;
	void Fly()const;

	float GetFlyHeight()const;
};